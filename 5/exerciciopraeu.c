#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
    int valor;
    struct no *proximo;
} no;

int main()
{
    int lista[4] = {1, 2, 3, 4};
    no *atual = NULL;
    for (int i = 0; i < 4; i++)
    {
        no *nova = malloc(sizeof(no));
        if (i < 3)
        {
            nova->valor = lista[i];
            nova->proximo = atual;
            atual = nova;
        }
        else
        {
            nova->proximo = NULL;
        }
    }
}


