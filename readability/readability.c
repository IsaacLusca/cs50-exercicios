#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

int main(void)
{
    string texto = get_string("Text: ");
    int t = 0;
    int palavra = 0;

    for (int i = 0; i < strlen(texto); i++)
    {
        if (texto[i] == ' ')
        {
            palavra[] = strlen(texto);
        }
    }

    printf("%i %i %i \n", palavra[]);
}

// Palavras longas tem um "maior nível"
// Frases longas tem um "Maior

    // Ignora os espaços vazios
    // for (int i = 0; i < strlen(texto); i++)
    // {
    //     if (texto [i] != ' ')
    //     {
    //         t++;
    //     }
    // }
