#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    // enquanto n for menor que 1, do será executado indeterminadamente
    do
    {
        n = get_int("Tamanho: ");
    }
    while (n < 1);

    // primeiro laço para percorrer toda estrutura e colocar a quebra de linha
    for (int i = 0; i < n; i++)
    {
        // esse laço vai colocar o valor de entrada n no J e,
        // enquanto j for maior que i, vai ser adicionado um campo vazio e j será subtraído
        for (int j = n - 1; j > i; j--)
        {
            printf(" ");
        }

        // nesse laço, k sempre será iniciado a zero e,
        // enquanto k for menor ou igual que a variável i (que está no for inicial),
        // será adicionado # até que k seja maior que i
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }

        // espaço de duas linhas
        printf("  ");

        // lógica da escada
        for (int l = 0; l <= i; l++)
        {
            printf("#");
        }

        printf("\n");
    }
}
