#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    int sum1 = 0;
    int sum2 = 0;

    string palavra1 = get_string("Player 1: ");
    string palavra2 = get_string("Player 2: ");

    for (int i = 0, n = strlen(palavra1); i < n; i++)
    {
        palavra1[i] = toupper(palavra1[i]);

        if (palavra1[i] == 'A' || palavra1[i] == 'E' || palavra1[i] == 'I' || palavra1[i] == 'L' ||
            palavra1[i] == 'N' || palavra1[i] == 'O' || palavra1[i] == 'R' || palavra1[i] == 'S' ||
            palavra1[i] == 'T' || palavra1[i] == 'U')
        {
            sum1 += 1;
        }
        else if (palavra1[i] == 'D' || palavra1[i] == 'G')
        {
            sum1 += 2;
        }
        else if (palavra1[i] == 'B' || palavra1[i] == 'C' || palavra1[i] == 'M' || palavra1[i] == 'P')
        {
            sum1 += 3;
        }
        else if (palavra1[i] == 'F' || palavra1[i] == 'H' || palavra1[i] == 'V' || palavra1[i] == 'W' || palavra1[i] == 'Y')
        {
            sum1 += 4;
        }
        else if (palavra1[i] == 'K')
        {
            sum1 += 5;
        }
        else if (palavra1[i] == 'J' || palavra1[i] == 'X')
        {
            sum1 += 8;
        }
        else if (palavra1[i] == 'Q' || palavra1[i] == 'Z')
        {
            sum1 += 10;
        }

        // printf("%c", toupper(palavra1[i]));
    }
    for (int i = 0, n = strlen(palavra2); i < n; i++)
    {
        palavra1[i] = toupper(palavra2[i]);

        if (palavra1[i] == 'A' || palavra1[i] == 'E' || palavra1[i] == 'I' || palavra1[i] == 'L' ||
            palavra1[i] == 'N' || palavra1[i] == 'O' || palavra1[i] == 'R' || palavra1[i] == 'S' ||
            palavra1[i] == 'T' || palavra1[i] == 'U')
        {
            sum2 += 1;
        }
        else if (palavra1[i] == 'D' || palavra1[i] == 'G')
        {
            sum2 += 2;
        }
        else if (palavra1[i] == 'B' || palavra1[i] == 'C' || palavra1[i] == 'M' || palavra1[i] == 'P')
        {
            sum2 += 3;
        }
        else if (palavra1[i] == 'F' || palavra1[i] == 'H' || palavra1[i] == 'V' || palavra1[i] == 'W' || palavra1[i] == 'Y')
        {
            sum2 += 4;
        }
        else if (palavra1[i] == 'K')
        {
            sum2 += 5;
        }
        else if (palavra1[i] == 'J' || palavra1[i] == 'X')
        {
            sum2 += 8;
        }
        else if (palavra1[i] == 'Q' || palavra1[i] == 'Z')
        {
            sum2 += 10;
        }

        // printf("%c", toupper(palavra1[i]));
        printf("%i %i \n", sum1, sum2);
    }



    return 0;
}
