from flask import Flask, render_template, request

app = Flask(__name__)

SPORTS = ["Basquete", "Futebol", "Volei", "Queimada", "Basebol"]

@app.route("/")
def index():
    return render_template("index.html", sports= SPORTS)


@app.route("/register", methods=["POST"])
def register():
    # caso queira ter apenas as entradaspadrões: if not request.form.get("name") or request.form.get("sport") not in SPORTS:
    if not request.form.get("name"):
        return render_template("erro.html")
    for sport in request.form.getlist("sport"):
        if sport not in SPORTS:
            return render_template("erro.html")
    return render_template("sucesso.html")
