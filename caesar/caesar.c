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
                dentro_palavra = true;
                printf("%c", (texto[i] + chave) % 26);
            }
            else
            {
                printf("%c", texto[i]);
            }
        }
    }
    printf("\n");
}
