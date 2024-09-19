#include<stdio.h>
#include<cs50.h>

int main(void)
{

    for (int i = 0; i < 4; i++)
    {
        printf("?");
    }
    printf("\n");

    // int n = get_int("Tamanho: \n");
    // while (n < 1)
    // {
    //     n = get_int("Tamanho: \n");
    // }

    do
    {
        n = get_int("Tamanho: ");
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

