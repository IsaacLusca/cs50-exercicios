#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    for (int i = 0; argv[1][i] != '\0'; i++)
    {
        if (!isalpha(argv[1][i]))
        {
            printf("Usage: ./substitution key\n");
            return 1;
        }

        if (strlen(argv[1]) != 26)
        {
            printf("Key must contain 26 characters.\n");
            return 1;
        }
    }

    string texto = get_string("plaintext: ");
    // char alfabeto_min[26];
    // char alfabeto[26];

    // for (int i = 0; i < 26; i++)
    // {
    //     alfabeto_min[i] = 'a' + i;
    //     alfabeto[i] = 'A' + i;
    // }

    printf("ciphertext: ");
    for (int i = 0, n = strlen(texto); i < n; i++)
    {
        if (isalpha(texto[i]))
        {
            if (isupper(texto[i]))
            {
                int pos = texto[i] - 'A';
                printf("%c", argv[1][pos]);
            }
            else if (islower(texto[i]))
            {
                int pos = texto[i] - 'a';
                printf("%c", argv[1][pos]);
            }
            else
            {
                printf("%c", texto[i]);
            }
        }
        else
        {
            printf("%c", texto[i]);
        }

    }

    printf("\n");
    // printf("Deu bom!\n");
}

