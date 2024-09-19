#include<cs50.h>
#include<stdio.h>

int main(void)
{

    // permitir apenas valores positivos
    int n;
    do
    {
        n = get_int("Tamanho: ");
    }
    while(n < 1);

    //loop para exibir os hashtags n por n
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("?");
    // }
    // printf("\n");

    // int n = get_int("Tamanho: \n");
    // while (n < 1)
    // {
    //     n = get_int("Tamanho: \n");
    // }
