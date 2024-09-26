#include <cs50.h>
#include <stdio.h>

void draw(int n);
int main(void)
{
    int altura = get_int("Altura: ");

    draw(altura);
}

void draw(int n)
{
    // imprimir piramide de tamanho n - 1
    draw(n - 1);

    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         printf("#");
    //     }
    //     printf("\n");
    // }
