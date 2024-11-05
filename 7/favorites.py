# # import csv

# # ABRINDO E LENDO LINHAS ESPECIFICAS

# # with open("favorites.csv", "r") as file:
# #   reader = csv.DictReader(file)
# #   next(reader)
# #   for row in reader:
# #     favorite = row["language"]
# #     print(favorite)

# # CONTADOR NÃO SIMPLIFICADO

#   # scratch, c, python = 0, 0, 0

#   # for row in reader:
#   #   if row["language"] == "Scratch":
#   #     scratch += 1
#   #   elif row["language"] == "Python":
#   #     python += 1
#   #   c += 1

# # import csv

# # with open("favorites.csv", "r") as file:
# #   reader = csv.DictReader(file)
# #   counts = {}

# #   for row in reader:
# #     favorite = row["language"]
# #     if favorite in counts:
# #       counts[favorite] += 1
# #     else:
# #       counts[favorite] = 1

# # # sorted faz a ordenação, se usar apenas com count ordena em ordem alfabetica. Para ordenar pegando o valor, precisa mudar a chave para o valor.

# # for favorite in sorted(counts, key=counts.get, reverse=True):
# #   print(f"{favorite}: {counts[favorite]}")


# import csv
# from collections import Counter

# with open("favorites.csv", "r"):
#   reader = csv.DictReader(file)
#   counts = Counter()

#   for row in reader:
#     favorite = row["language"]
#     counts[favorite] += 1

# for favorite in sorted(counts, key=counts.get, reverse= True):
#   print(f"{favorite}: {counts[favorite]}")


# # For de forma mais simples:

# for favorite, count in counts.most_common():
#   print(f"{favorite}: {count}")


# import csv
# from collections import Counter

# with open("favorites.csv", "r") as file:
#   reader = csv.DictReader(file)
#   counts = Counter()

# for row in reader:
#   favorite = row["problem"]
#   counts[favorite] += 1

# favorite = input("favorite: ")
# print(f"{favorite}: {counts[favorite]}")
