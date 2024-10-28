from cs50 import get_string
import re

def cont_letras(texto):
    letras = len(re.findall(r'[a-zA-Z]', texto))


def cont_palavras(texto):
    palavras = len(texto.split())


def cont_sentencas(texto):
    sentenca = len(re.split(r'[.!?]+', texto)) - 1


def grade(indice):
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











# #include <cs50.h>
# #include <ctype.h>
# #include <math.h>
# #include <stdio.h>
# #include <string.h>

# int contador_letras(string txt);
# int contador_palavras(string txt);
# int contador_sentencas(string txt);

# int main(void)
# {

#     string texto = get_string("Text: ");

#     int letras = contador_letras(texto);
#     int palavras = contador_palavras(texto);
#     int sentencas = contador_sentencas(texto);

#     float L = (float) letras / palavras * 100;
#     float S = (float) sentencas / palavras * 100;

#     float liau = 0.0588 * L - 0.296 * S - 15.8;

#     // float arredondando = round(liau * 10)/10;
#     int calculo = round(liau);

#     // Verificação dos valores
#     if (calculo >= 16)
#     {
#         printf("Grade 16+\n");
#     }
#     else if (calculo < 1)
#     {
#         printf("Before Grade 1\n");
#     }
#     else if (calculo >= 1 && calculo < 2)
#     {
#         printf("Grade 1\n");
#     }
#     else if (calculo >= 2 && calculo < 3)
#     {
#         printf("Grade 2\n");
#     }
#     else if (calculo >= 3 && calculo < 4)
#     {
#         printf("Grade 3\n");
#     }
#     else if (calculo >= 4 && calculo < 5)
#     {
#         printf("Grade 4\n");
#     }
#     else if (calculo >= 5 && calculo < 6)
#     {
#         printf("Grade 5\n");
#     }
#     else if (calculo >= 6 && calculo < 7)
#     {
#         printf("Grade 6\n");
#     }
#     else if (calculo >= 7 && calculo < 8)
#     {
#         printf("Grade 7\n");
#     }
#     else if (calculo >= 8 && calculo < 9)
#     {
#         printf("Grade 8\n");
#     }
#     else if (calculo >= 9 && calculo < 10)
#     {
#         printf("Grade 9\n");
#     }
#     else if (calculo >= 10 && calculo < 11)
#     {
#         printf("Grade 10\n");
#     }
#     else if (calculo >= 11 && calculo < 12)
#     {
#         printf("Grade 11\n");
#     }
#     else if (calculo >= 12 && calculo < 13)
#     {
#         printf("Grade 12\n");
#     }
#     else if (calculo >= 13 && calculo < 14)
#     {
#         printf("Grade 13\n");
#     }
#     else if (calculo >= 14 && calculo < 15)
#     {
#         printf("Grade 14\n");
#     }
#     else if (calculo >= 15 && calculo < 16)
#     {
#         printf("Grade 15\n");
#     }

#     // printf("letras: %i\nPalavras: %i\nSentença: %i\nCalculo: %f\nFinal: %i\n", letras, palavras,
#     // sentencas, liau, calculo);
# }

# // Contar letras
# int contador_letras(string txt)
# {
#     int let = 0;
#     for (int i = 0, n = strlen(txt); i < n; i++)
#     {
#         if (isalpha(txt[i]))
#         {
#             let++;
#         }
#     }
#     return let;
# }

# // Contar palavras
# int contador_palavras(string txt)
# {
#     int pal = 0;
#     bool dentro_palavra = false;
#     for (int i = 0, n = strlen(txt); i < n; i++)
#     {
#         // se o texto estiver dentro da palavra, pal vai somar 1.

#         if (isalpha(txt[i]) || txt[i] == '\'' || txt[i] == '-')
#         {
#             if (!dentro_palavra)
#             {
#                 pal++;
#                 dentro_palavra = true;
#             }
#         }
#         else
#         {
#             dentro_palavra = false;
#         }
#     }
#     return pal;
# }

# // Contar sentanças
# int contador_sentencas(string txt)
# {
#     int sent = 0;
#     for (int i = 0, n = strlen(txt); i < n; i++)
#     {
#         if (txt[i] == '.' || txt[i] == '?' || txt[i] == '!')
#         {
#             sent++;
#         }
#     }
#     return sent;
# }

# // if (txt[i] == ' '||
# //     txt[i] == '.' && txt[i] ==' '||
# //     txt[i] == '!'||
# //     txt[i] == '!' && txt[i] ==' '||
# //     txt[i] == '?'||
# //     txt[i] == '?' && txt[i] ==' '||
# //     txt[i] == '/'||
# //     txt[i] == '\''
# //     )
# //     {
# //         pal++;
# //     }

# // calcular qtd de letra
# // calcular qtd de palavras
# // calcular qtd de sentenças
