# Usando python para fazer consultas
from cs50 import SQL

# abrindo arquivos db:
db = SQL("sqlite:///favorites.db")

favorite = input("Favorite: ")

#linha
rows = db.execute("SELECT COUNT(*) AS n FROM favorites WHERE problem = ?", favorite)

row = rows[0]

print(row["n"])
