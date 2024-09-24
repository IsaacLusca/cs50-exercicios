#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int calcular_pontuacao(string palavra);
int main(int argc, string argv[])
{

    string palavra1 = get_string("Player 1: ");
    string palavra2 = get_string("Player 2: ");

    // Chamando a função de pontuação
    int sum1 = calcular_pontuacao(palavra1);
    int sum2 = calcular_pontuacao(palavra2);

    // Comparando valores
    if (sum1 == sum2)
    {
        printf("Tie!\n");
    }
    if (sum1 > sum2)
    {
        printf("Player 1 wins!\n");
    }
    if (sum1 < sum2)
    {
        printf("Player 2 wins!\n");
    }

    return 0;
}

// Função para calcular pontuação
int calcular_pontuacao(string palavra)
{
    int points[26] = {1, 3, 3, 2,  1, 4, 2, 4, 1, 8, 5, 1, 3,
                      1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    int sum = 0;
    // Comparar e atribuir os valoress
    for (int i = 0, n = strlen(palavra); i < n; i++)
    {
        palavra[i] = toupper(palavra[i]);

        if (palavra[i] >= 'A' && palavra[i] <= 'z')
        {
            sum += points[palavra[i] - 'A'];
        }
    }
    return sum;
}
