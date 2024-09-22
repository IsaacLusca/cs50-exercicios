#include <stdio.h>
int main(void)
{
    int bloco = 4;

    for (int i = 0; i < bloco; i++)
    {
        for (int j = bloco; j - 1 > i; j--)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
