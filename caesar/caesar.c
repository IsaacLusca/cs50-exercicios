#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    int chave = get_int("Chave: ");
    string texto = get_string("Text: ");

    for (int i = 0, n = strlen(texto); i < n; i++)
    {
        printf("%c", texto[i] + n);
    }
}
