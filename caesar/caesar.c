#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    // int chave = get_int("Chave: ");
    string texto = get_string("Text: ");
    bool dentro_palavra = false;

    for (int i = 0, n = strlen(texto); i < n; i++)
    {
        // isalpha verifica se é uma letra do alfabeto
        if (isalpha(texto[i]))
        {
            if (isupper(texto[i]))
            {
                printf("%c", 'A' + (texto[i] - 'A' + 13) % 26);
            }
            if (islower(texto[i]))
            {
                printf("%c", 'a' + (texto[i] - 'a' + 13) % 26);
            }
        }
        else (printf("%c", texto[i]));


    }
    printf("\n");

    printf("a: %i\n", 'a');
    printf("b: %i\n", 'b');
    printf("A: %i\n", 'A');
    printf("B: %i\n", 'B');
    printf("A+1: %c\n", 68 % 26);
    printf("a+1: %c\n", 111 % 26);

}
