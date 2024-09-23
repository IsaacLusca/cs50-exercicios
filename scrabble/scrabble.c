#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    int sum1 = 0;

    string palavra1 = get_string("Player 1: ");
    string palavra2 = get_string("Player 2: ");

    for (int i = 0, n = strlen(palavra1); i < n; i++)
    {
        if (palavra1[i] == 'A'||'E'||'L'||'N'||'O'||'R'||'S'||'T'||'U')
        {
            sum1++;
        }
        else if (palavra1[i] == 'B'||'E'||'L'||'N'||'O'||'R'||'S'||'T'||'U')

        // printf("%c", toupper(palavra1[i]));
    }
    printf("\n");
    for (int i = 0, n = strlen(palavra1); i < n; i++)
    {
        // printf("%c", toupper(palavra2[i]));
    }
    printf("\n");

    return 0;
}
