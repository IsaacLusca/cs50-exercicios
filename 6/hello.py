from cs50 import get_string

#pergunta = input("What's your name? ")
#print(f"Hello, {pergunta}")
fatorial = input("fatorial de quanto? ")

inicio = fatorial
count = 0
i = 0
while (i < inicio):
    fatorial = fatorial * (fatorial - 1)
    i += 1
