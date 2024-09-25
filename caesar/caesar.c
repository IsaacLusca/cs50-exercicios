#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    // int chave = get_int("Chave: ");

    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    for (int i = 0; argv[1][i] != '\0'; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    int chave = atoi(argv[1]);
    if (chave < 1)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    string texto = get_string("plaintext: ");

    printf("ciphertext: ");
    for (int i = 0, n = strlen(texto); i < n; i++)
    {
        // isalpha verifica se é uma letra do alfabeto
        if (isalpha(texto[i]))
        {
            // Para letras maiusculas
            if (isupper(texto[i]))
            {
                printf("%c", 'A' + (texto[i] - 'A' + chave) % 26);
            }
            // Para minusculas
            if (islower(texto[i]))
            {
                printf("%c", 'a' + (texto[i] - 'a' + chave) % 26);
            }
        }
        else (printf("%c", texto[i]));
    }

    printf("\n");
    printf("%c\n", 'A' - () );
    printf("%i", 'A' = 'H');
}
