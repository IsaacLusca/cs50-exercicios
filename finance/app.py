import os

from cs50 import SQL
from flask import Flask, flash, redirect, render_template, request, session
from flask_session import Session
from werkzeug.security import check_password_hash, generate_password_hash

from helpers import apology, login_required, lookup, usd

# Configure application
app = Flask(__name__)

# Custom filter
app.jinja_env.filters["usd"] = usd

# Configure session to use filesystem (instead of signed cookies)
app.config["SESSION_PERMANENT"] = False
app.config["SESSION_TYPE"] = "filesystem"
Session(app)

# Configure CS50 Library to use SQLite database
db = SQL("sqlite:///finance.db")


@app.after_request
def after_request(response):
    """Ensure responses aren't cached"""
    response.headers["Cache-Control"] = "no-cache, no-store, must-revalidate"
    response.headers["Expires"] = 0
    response.headers["Pragma"] = "no-cache"
    return response


@app.route("/")
@login_required
def index():
    """Show portfolio of stocks"""
    user_id = session["user_id"]

    # Buscar ações do usuário (total líquido)
    stocks = db.execute("""
        SELECT symbol, SUM(shares) AS total_shares
        FROM transactions
        WHERE user_id = ?
        GROUP BY symbol
        HAVING total_shares > 0
    """, user_id)

    portfolio = []
    total_value = 0

    # Buscar cotação de cada ação
    for stock in stocks:
        quote = lookup(stock["symbol"])  # Pega o preço atual da ação
        price = quote["price"]
        total = price * stock["total_shares"]
        total_value += total

        portfolio.append({
            "symbol": stock["symbol"],
            "shares": stock["total_shares"],
            "price": price,
            "total": total
        })

    # Buscar saldo do usuário
    cash = db.execute("SELECT cash FROM users WHERE id = ?", user_id)[0]["cash"]
    total_value += cash  # Valor total = ações + saldo disponível

    return render_template("home.html", portfolio=portfolio, cash=cash, total_value=total_value)


@app.route("/buy", methods=["GET", "POST"])
@login_required
def buy():
    """Buy shares of stock"""
    if request.method == "POST":
        # Obter dados do formulário
        symbol = request.form.get("symbol").upper()
        shares = request.form.get("shares")

        # Verificar se os campos foram preenchidos
        if not symbol or not shares:
            return apology("Preencha todos os campos!", 400)

        # Verificar se shares é um número válido
        try:
            shares = int(shares)
            if shares <= 0:
                return apology("Número de ações inválido!", 400)
        except ValueError:
            return apology("Número de ações inválido!", 400)

        # Buscar a cotação da ação
        quote = lookup(symbol)
        if not quote:
            return apology("Símbolo não encontrado!", 400)

        price = quote["price"]
        total_cost = price * shares

        # Obter saldo do usuário
        user_id = session["user_id"]
        user_cash = db.execute("SELECT cash FROM users WHERE id = ?", user_id)[0]["cash"]

        # Verificar se o usuário tem saldo suficiente
        if total_cost > user_cash:
            return apology("Saldo insuficiente!", 400)

        # Atualizar saldo do usuário
        db.execute("UPDATE users SET cash = cash - ? WHERE id = ?", total_cost, user_id)

        # Registrar a compra na tabela de transações
        db.execute("INSERT INTO transactions (user_id, symbol, shares, price, type) VALUES (?, ?, ?, ?, ?)",
                   user_id, symbol, shares, price, "buy")

        return redirect("/")

    return render_template("buy.html")


@app.route("/history")
@login_required
def history():
    """Show history of transactions"""
    user_id = session["user_id"]

    # Buscar todas as transações do usuário ordenadas pelo timestamp
    history = db.execute("""
        SELECT symbol, shares, price, type, timestamp
        FROM transactions
        WHERE user_id = ?
        ORDER BY timestamp DESC
    """, user_id)

    return render_template("history.html", history=history)


@app.route("/login", methods=["GET", "POST"])
def login():
    """Log user in"""

    # Forget any user_id
    session.clear()

    # User reached route via POST (as by submitting a form via POST)
    if request.method == "POST":
        # Ensure username was submitted
        if not request.form.get("username"):
            return apology("must provide username", 403)

        # Ensure password was submitted
        elif not request.form.get("password"):
            return apology("must provide password", 403)

        # Query database for username
        rows = db.execute(
            "SELECT * FROM users WHERE username = ?", request.form.get("username")
        )

        # Ensure username exists and password is correct
        if len(rows) != 1 or not check_password_hash(
            rows[0]["hash"], request.form.get("password")
        ):
            return apology("invalid username and/or password", 403)

        # Remember which user has logged in
        session["user_id"] = rows[0]["id"]

        # Redirect user to home page
        return redirect("/")

    # User reached route via GET (as by clicking a link or via redirect)
    else:
        return render_template("login.html")


@app.route("/logout")
def logout():
    """Log user out"""

    # Forget any user_id
    session.clear()

    # Redirect user to login form
    return redirect("/")


@app.route("/quote", methods=["GET", "POST"])
@login_required
def quote():
    """Get stock quote."""
    if request.method == "POST":
        symbol = request.form.get("symbol")
        quote = lookup(symbol)
        if not quote:
            return apology("não existe esse simbolo!", 400)
        return render_template("quote.html", quote=quote)
    else:
        return render_template("quote.html")


@app.route("/register", methods=["GET", "POST"])
def register():
    """Register user"""
    if request.method == "POST":
        username = request.form.get("username")
        password = request.form.get("password")
        confirmation = request.form.get("confirmation")

        # Verificar se os campos foram preenchidos
        if not username or not password or not confirmation:
            return apology("must provide username and password", 400)

        # Verificar se as senhas coincidem
        if password != confirmation:
            return apology("passwords do not match", 400)

        # Verificar se o nome de usuário já existe
        user_check = db.execute("SELECT * FROM users WHERE username = ?", username)
        if user_check:
            return apology("username already exists", 400)

        # Inserir novo usuário no banco
        hash = generate_password_hash(password)
        db.execute("INSERT INTO users (username, hash) VALUES (?, ?)", username, hash)

        return redirect("/")

    return render_template("register.html")


@app.route("/sell", methods=["GET", "POST"])
@login_required
def sell():
    """Sell shares of stock"""
    user_id = session["user_id"]

    if request.method == "POST":
        symbol = request.form.get("symbol").upper()
        shares = request.form.get("shares")

        if not symbol or not shares:
            return apology("Preencha todos os campos!", 400)

        # Verificar se o usuário tem ações suficientes
        user_shares = db.execute("""
            SELECT SUM(shares) AS total_shares
            FROM transactions
            WHERE user_id = ? AND symbol = ?
        """, user_id, symbol)

        if not user_shares or user_shares[0]["total_shares"] is None:
            return apology("Você não possui ações dessa empresa!", 400)

        maxShares = user_shares[0]["total_shares"]

        try:
            shares = int(shares)
            if shares <= 0 or shares > maxShares:
                return apology("Quantidade inválida!", 400)
        except ValueError:
            return apology("Valor inválido!", 400)

        # Buscar cotação atual da ação
        quote = lookup(symbol)
        if not quote:
            return apology("Símbolo não encontrado!", 400)

        price = quote["price"]
        total_revenue = price * shares  # Valor da venda

        # Atualizar saldo do usuário
        db.execute("UPDATE users SET cash = cash + ? WHERE id = ?", total_revenue, user_id)

        # Registrar venda na tabela de transações
        db.execute("""
            INSERT INTO transactions (user_id, symbol, shares, price, type)
            VALUES (?, ?, ?, ?, ?)
        """, user_id, symbol, -shares, price, "sell")  # shares negativo para indicar venda

        return redirect("/")

    # Buscar ações que o usuário possui para exibir no formulário de venda
    user_stocks = db.execute("""
        SELECT symbol, SUM(shares) AS total_shares
        FROM transactions
        WHERE user_id = ?
        GROUP BY symbol
        HAVING total_shares > 0
    """, user_id)

    return render_template("sell.html", stocks=user_stocks)
