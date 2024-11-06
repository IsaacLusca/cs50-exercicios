# Usando python para fazer consultas
from cs50 import SQL

# abrindo arquivos db:
db = SQL("sqlite:///favorites.db")

favorite = input("Favorite: ")

#linha
rows = db.execute("SELECT COUNT(*) AS n FROM favorites WHERE problem = ?", favorite)

row = rows[0]

print(row["n"])


# Como pode ter sido implementado uma curtida no instagram>

# rows = db.execute("SELECT likes FROM posts WHERE id = ?", id);
# likes = rows[0]["likes"]
# db.execute("UPDATE posts SET likes = ? WHERE id = ?", likes + 1, id);
