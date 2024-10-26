s = input("Você concorda?")

# Diferente de c que usa ||, em python é or

# if s == "Y" or s == "y":
#     print("Concordo.")

s = s.lower()

while True:
    if s in ["y", "yes"]:
        print("concordo.")
    elif s in ["n", "no"]:
        print("nao concordo")
