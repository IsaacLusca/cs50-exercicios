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
    if (n < 1)
    {
        return;
    }

    // printa a piramide de tamanho n - 1
    draw(n - 1);

    // printa mais uma linha
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}
