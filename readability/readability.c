#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

int main(void)
{
    string texto = get_string("Text: ");
    int t = 0;
    int n = 0;
    int palavra[n];

    for (int i = 0; i < strlen(texto); i++)
    {
        if (texto[i] == ' ')
        {
            palavra[n] = strlen(texto);
        }
        n++;
    }

    printf("%i\n", palavra[n]);
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
