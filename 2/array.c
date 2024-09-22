#include <stdio.h>
int main(void)
{
    int bloco = 3;

    for (int i = 0; i < bloco; i++)
    {
        for (int j = 0; j < bloco; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
