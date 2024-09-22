#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int notas = 0;
    int qnt;
    float sumNotas = 0;
    do
    {
        qnt = get_int("Quantidade: ");

        for (int i = 1; i <= qnt; i++)
        {
            notas = get_int("nota %i: ", i);
            sumNotas = sumNotas + notas;
        }
    }
    while (qnt < 1);

    float media = sumNotas / qnt;

    printf("%.2f",media);
}
