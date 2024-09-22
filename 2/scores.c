#include <cs50.h>
#include <stdio.h>

const int N = 3;

float media(int tamanho, int array[]);

int main(void)
{
    int scores[N];

    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("nota: ");
    }

}

float media(int tamanho, int array[])
{
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += scores[N];
    }
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
