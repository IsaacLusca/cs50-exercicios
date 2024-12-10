from flask import Flask, render_template, request

app = Flask(__name__)

@app.route("/")
def index():
    name = request.args["name", None]
    return render_template("index.html", placeholder=name)
