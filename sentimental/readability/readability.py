from cs50 import get_string
import re


def cont_letras(texto):
    return len(re.findall(r'[a-zA-Z]', texto))


def cont_palavras(texto):
    return len(texto.split())


def cont_sentencas(texto):
    return len(re.split(r'[.!?]+', texto)) - 1


def grade(calculo):
    if calculo >= 16:
        print("Grade 16+")
    elif calculo < 1:
        print("Before Grade 1")
    elif 1 <= calculo < 2:
        print("Grade 1")
    elif 2 <= calculo < 3:
        print("Grade 2")
    elif 3 <= calculo < 4:
        print("Grade 3")
    elif 4 <= calculo < 5:
        print("Grade 4")
    elif 5 <= calculo < 6:
        print("Grade 5")
    elif 6 <= calculo < 7:
        print("Grade 6")
    elif 7 <= calculo < 8:
        print("Grade 7")
    elif 8 <= calculo < 9:
        print("Grade 8")
    elif 9 <= calculo < 10:
        print("Grade 9")
    elif 10 <= calculo < 11:
        print("Grade 10")
    elif 11 <= calculo < 12:
        print("Grade 11")
    elif 12 <= calculo < 13:
        print("Grade 12")
    elif 13 <= calculo < 14:
        print("Grade 13")
    elif 14 <= calculo < 15:
        print("Grade 14")
    elif 15 <= calculo < 16:
        print("Grade 15")


def main():

    texto = get_string("Text: ")

    letras = cont_letras(texto)
    palavras = cont_palavras(texto)
    sentencas = cont_sentencas(texto)

    L = (letras / palavras) * 100
    S = (sentencas / palavras) * 100

    indice = 0.0588 * L - 0.296 * S - 15.8

    indice = round(indice, 2)

    grade(indice)


main()
