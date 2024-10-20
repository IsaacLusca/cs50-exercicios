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
    no *nova = malloc(sizeof(no));
    nova = NULL;

    for (int i = 0; i < 3; i++)
    {
        no *aux = nova;
        nova->valor = lista[i];
        aux->next =
    }
}
