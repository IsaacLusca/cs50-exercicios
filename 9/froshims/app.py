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

 jklçlkj jklçlkj jklçlkj jklçlkj jklçlkj jklçlkj jklçlkj jklçlkj jklçlkj jklçlkj jklçlkj jklçlkj
 jklçlkj jklçlkj jklçlkj jklçlkj jklçlkj jklçlkj jklçlkj jklçlkj jklçlkj jklçlkj jklçlkj jklçlkj
 asdf fdsasdf fdasdf fdsasdf fdassddf dfsasdf fdsasdf fdsasdf dfsaasdf fdsasdf fdsasdf dasdf fdasdf fdasdf
 asdf fdsasdf fdsasdf fdasddf fdasdf fdsasdf fdsasdf fdsasdf fdsa
 asdf fdsasdaf dfsasdf dfsasdf fdsasdf fdsasdf dfdsasdaf
  fdsasdf fdsasdf dfsaasdf dfsasdf fdassdf dfsa
  asdf fdasdf fdsasdf fdsasdf
  asdaf fdsa
  asdf fdsasdf dfsa
  asdf fdsasdf fdsa
  asdaf fdsaasdf dsa
  asdf fdsasdf
   fdassdf fdsa
   asdaf fdsasdf
   asdf fdsasdf
    fdadsf fdsasfd
    asdaf asdf
    asdf
    asdf
    asdf
    asdf
    asdf
    asdf
    asdf fdsasdf dfsadsf fdsasdf fdassdf dfsasdf fdasdf dfsasdf fdsaj klçlkj jklçlkj jklçlkj d saSAASDF FDSASDF FDSASDF FDASDF FDSA
    ASDF FDSASDF FDSASDFA FDSASDF FDSASDF FDSASDF FDSASDF FDASDASF DSASDF
    F DSAS
    F DASDF FDSADSF FDSASDF FDSADF FDSASDF FDSA
     FDASSDF FDSASDF
      FDSASDF FDSASDF FDSADF DSASDAF FDSASDF FDSADSF
       FDSASDF FDASSDAF FDSASDF FDASDF FDSASDF FDSASDF FDSADF
        FDSASDF FDSASDF FDSASDF FDSASDF FDSASDFA FDSASDF FDSAASDF FDSASDF F
         FDSASSDF DFSADF ASDF ASD
          JKLÇLKJ JKLÇLKJ JKLÇLKJ JKLÇLKJ JKLÇLKJ JKLÇLKJ JKLÇLKJ ASDAF JKLÇASDF JKLÇASDF JKLÇSADF JKLÇSADF JKLÇASDF JKLÇASDF JKL
          ASDF JKLÇASDF JKLÇASDF JKL
          ASDF JKLÇSAD FJKLÇSD FGJKLÇ
          ASDF JKLÇASDF JKLÇASDÇF JKLÇSDAF JKLAÇSDF JKLÇASDF JKLÇSD FJASKLÇASDFJKLÇASDFJKLÇASDFJK
          ASDFJKLÇASDFJKLÇASDFJKLÇASSDJFK
          ASDFJKLÇASDFJKLÇASDFJKLÇASDFJKLÇ
          ASDFJKLÇASDFAJKLÇASDFJKLÇASDJFKLÇ
          ASDFJKLÇASDJFKLÇDFJSAKLÇASDJFKL
          SADF JKLÇSADF JKLÇASDF JKLÇSADF
          ASDF JKLÇASDF JKLÇSADF JKLÇASDF KJL
          ASDAF JKLÇASDF JKLÇASDF JKLÇASDF JKLÇASDF JKLAÇSDF JKLÇASDF JKLÇASDF JKLÇASD
          ASDF JKLÇSADF JKLÇASDF JKLÇSADF JKLÇASDF JKLÇASDF JKLÇASDF
          ASDAF JKLÇASDF JKLÇSDAF JKLÇASDF JKLÇASDF JKLÇASDFJKLÇASDFJKLÇASDFJKLÇASDFJKLÇASDFJKLÇ FDAS JKLDÇSALKDFJ JFDKLAÇLKDSJF JFKDLSAÇLKJ JKLÇLKJ JKLÇLKJ JKLÇLKJ JKLÇLK
          AASDF DFSADAF DSASDAFFDSADFS FDASDAF FDSASDF FDSASDF FDSADF FDASSD
          DF  FDAS FDSADF FDSASDF FDSASDF FDSADF FDSASDF FDSASDF
           FDASDSF FDSASDF FDSA
           F DSASDF FDSA
            FDSADSF FDSA
             FDSADSF FDSA
             
