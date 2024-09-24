#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    int chave = get_int("Chave: ");
    string texto = get_string("Text: ");
    bool dentro_palavra = false;

    int num = 0;

    for (int i = 0, n = strlen(texto); i < n; i++)
    {
        // isalpha verifica se é uma letra do alfabeto
        if(!isalpha(texto[i]))
        {
            if (num = texto[i] > 25)
            {
                num = 0;
            }
            printf("%c", texto[i]);
        }
        else
        {
            printf("%c", texto[i] + chave);
        }
    }
    printf("\n");
}
