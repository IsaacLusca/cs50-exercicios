#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int notas = 0;
    int qnt;
    do
    {
        qnt = get_int("Quantidade: ");

        for (int i = 1; i <= qnt; i++)
        {
10            notas = get_int("nota %i: ", i);
            notas += notas;
        }
    }
    while (qnt < 1);

    int media = notas / qnt;

    printf("%i",media);
}
