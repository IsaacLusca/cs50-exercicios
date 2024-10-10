#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
    int numero;
    struct no *proximo;
} no;

int main(int argc, char *argv[])
{
    no *list = NULL;

    for (int i = 1; i < argc; i++)
    {
        int valor = atoi(argv[i]);
        no *n = malloc(sizeof(no));

        if (n == NULL)
        {
            free(n);
            return 1;
        }

        n->numero = valor;
        n->proximo = list;
        list = n;
    }
}
