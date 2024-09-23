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



    if(sum1 == sum2)
    {
        printf("Tie!\n");
    }
    if(sum1 > sum2)
    {
        printf("Player 1 wins!\n");
    }
    if(sum1 < sum2)
    {
        printf("Player 2 wins!\n");
    }


    return 0;
}

int calcular_pontuacao(string palavra)
{
    for (int i = 0, n = strlen(palavra); i < n; i++)
    {
        palavra[i] = toupper(palavra[i]);

        if (palavra[i] == 'A' || palavra[i] == 'E' || palavra[i] == 'I' || palavra[i] == 'L' ||
            palavra[i] == 'N' || palavra[i] == 'O' || palavra[i] == 'R' || palavra[i] == 'S' ||
            palavra[i] == 'T' || palavra[i] == 'U')
        {
            sum1 += 1;
        }
        else if (palavra[i] == 'D' || palavra[i] == 'G')
        {
            sum1 += 2;
        }
        else if (palavra[i] == 'B' || palavra[i] == 'C' || palavra[i] == 'M' || palavra[i] == 'P')
        {
            sum1 += 3;
        }
        else if (palavra[i] == 'F' || palavra[i] == 'H' || palavra[i] == 'V' || palavra[i] == 'W' || palavra[i] == 'Y')
        {
            sum1 += 4;
        }
        else if (palavra[i] == 'K')
        {
            sum1 += 5;
        }
        else if (palavra[i] == 'J' || palavra[i] == 'X')
        {
            sum1 += 8;
        }
        else if (palavra[i] == 'Q' || palavra[i] == 'Z')
        {
            sum1 += 10;
        }

        // printf("%c", toupper(palavra[i]));
    }
}
