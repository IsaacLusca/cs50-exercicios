#include <cs50.h>
#include <stdio.h>

typedef struct
{
    string nome;
    int voto;
} candidatos;

int main(void)
{
    int num = 3;
    candidatos presidente[num];

    presidente[0].nome = "bolsonaro";
    presidente[0].voto = 100;

    presidente[1].nome = "Lula";
    presidente[1].voto = 100;

    presidente[2].nome = "Aecio";
    presidente[2].voto = 20;

    int maior_votos = 0;
    for (int i = 0; i < num; i++)
    {
        if (presidente[i].voto > maior_votos)
        {
            maior_votos = presidente[i].voto;
        }
        else if (presidente[i].voto == maior_votos)
        {
            printf("Houve empate, vamos reiniciar!\n");
            return 1;
        }
    }

    for (int i = 0; i < num; i++)
    {
        if (presidente[i].voto == maior_votos)
        {
            printf("%s\n", presidente[i].nome);
        }
    }
    printf("%i\n", maior_votos);
}
