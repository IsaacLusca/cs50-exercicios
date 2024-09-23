#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    string palavra1 = get_string("Player 1: ");
    string palavra2 = get_string("Player 2: ");

    for (int i = 0, n = strlen(palavra1); i < n; i++)
    {
        printf("%c", palavra1[i]);
    }
    printf("\n");
    for (int i = 0, n = strlen(palavra1); i < n; i++)
    {
        printf("%c", palavra2[i]);
    }
    printf("\n");
}
