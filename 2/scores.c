#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // int scores[3];
    // scores[0] = get_int("Nota: ");
    // scores[1] = get_int("Nota: ");
    // scores[2] = get_int("Nota: ");

    int n = 0;
    int scores[n];

    n = get_int("Qnt: ");

    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int("nota: ");
    }

    printf("Media: %.2f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
}

    // int notas = 0;
    // int qnt;
    // float sumNotas = 0;
    // do
    // {
    //     qnt = get_int("Quantidade: ");

    //     for (int i = 1; i <= qnt; i++)
    //     {
    //         notas = get_int("nota %i: ", i);
    //         sumNotas = sumNotas + notas;
    //     }
    // }
    // while (qnt < 1);

    // float media = sumNotas / qnt;

    // printf("%.2f",media);
