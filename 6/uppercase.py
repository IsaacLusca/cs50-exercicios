# before = input("Digite seu texto: ")
# after = before.upper()

# print(f"ficou: {after}")

before = input("Before: ")
print("After: ", end="") #para evitar que tenha quebras de linhas para cada palavra:

for c in before:
    print(c.upper(), end="")
print()
