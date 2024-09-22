#include <cs50.h>
#include <stdio.h>

void hashTamanho(int tamanho);

int main(void)
{
    int t = get_int("Tamanho: ");
    hashTamanho(t);
}

void hashTamanho(int tamanho)
{
    for(int i = 0; i <= tamanho; i++)
    {
        printf("#\n");
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
