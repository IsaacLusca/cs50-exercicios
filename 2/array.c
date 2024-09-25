#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = 10;
    int y = 10;

    char n[x][y];

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}





    // int bloco = 4;

    // for (int i = 0; i < bloco; i++)
    // {
    //     for (int j = bloco; j - 1 > i; j--)
    //     {
    //         printf(" ");
    //     }
    //     for (int j = 0; j <= i; j++)
    //     {
    //         printf("#");
    //     }
    //     printf("  ");

    //     for (int j = 0; j <= i; j++)
    //     {
    //         printf("#");
    //     }

    //     printf("\n");
    // }
