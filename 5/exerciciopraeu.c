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
    no *nova = NULL;

    for (int i = 0; i < 3; i++)
    {
        no *atual = malloc(sizeof(no));
    }
}
