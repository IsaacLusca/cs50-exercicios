from cs50 import get_float

A = 0.01
B = 0.05
C = 0.10
D = 0.25


def calc(valor):

    moeda = 0
    while valor >= D:
        moeda += 1
        valor = round(valor - D, 2)

    while valor >= C:
        moeda += 1
        valor = round(valor - C, 2)

    while valor >= B:
        moeda += 1
        valor = round(valor - B, 2)

    while valor >= A:
        moeda += 1
        valor = round(valor - A, 2)

    print(f"{moeda}")


def main():

    while True:
        cash = get_float("Numero: ")
        if cash > 0:
            calc(cash)
            break


main()
