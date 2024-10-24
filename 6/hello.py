from cs50 import get_string

#pergunta = input("What's your name? ")
#print(f"Hello, {pergunta}")
fatorial = int(input("fatorial de quanto? "))

inicio = fatorial

i = 1
while i < inicio:
    fatorial = fatorial * (fatorial - i)
    i += 1

print(f"Fatorial de {inicio} é {fatorial}")
