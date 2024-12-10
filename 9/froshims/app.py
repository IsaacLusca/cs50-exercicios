from flask import Flask, render_template, request

app = Flask(__name__)

@app.route("/")
def index():
    return render_template("index.html")


@app.route("/register", methods=["POST"])
def register():
    if not request.form.get("name") or not request.form.get("esportes"):
        return render_template("erro.html")
    return render_template("sucesso.html")
