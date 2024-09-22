#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int notas = 0;
    int qnt;
    do
    {
        qnt = get_int("Quantidade: \n");

        for (int i = 1; i <= qnt; i++)
        {
            notas = get_int("nota %i: \n", i);
            notas += notas;
        }
    }
    while (qnt < 1);

    int media = notas / qnt;

    printf("%i",media);
}
