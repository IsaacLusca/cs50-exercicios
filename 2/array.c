#include <stdio.h>
int main(void)
{
    int bloco = 4;

    for (int i = 0; i < bloco; i++)
    {
        for (int j = bloco; j > i; j--)
        {
            printf("#");
        }
        printf("\n");
    }
}
