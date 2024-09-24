#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    int chave = get_int("Chave: ");
    string texto = get_string("Text: ");
    bool dentro_palavra = false;

    for (int i = 0, n = strlen(texto); i < n; i++)
    {
        if (isalpha(texto[i]))
        {
            if(!dentro_palavra)
            {
                printf("%c", (texto[i] + chave));
                dentro_palavra = true;
            }
            else
            {
                printf("%c", texto[i]);
                dentro_palavra = false;
            }
        }
    }
    printf("\n");
}
