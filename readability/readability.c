#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

int main(void)
{
    string texto = get_string("Text: ");
    int t = 0;

    // Ignora os espaços vazios
    for (int i = 0; i < strlen(texto); i++)
    {
        if (texto [i] != ' ')
        {
            t++;
        }
    }

    printf("%i\n", t);
}

// Palavras longas tem um "maior nível"
// Frases longas tem um "Maior nível"
