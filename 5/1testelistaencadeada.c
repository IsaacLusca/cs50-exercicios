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
            return 1;
        }

        n->numero = valor;
        n->proximo = list;
        list = n;
    }

    // no *tmp = list;

    // while (tmp != NULL)
    // {
    //     printf("%i\n", tmp->numero);
    //     tmp = tmp->proximo;
    // }

    for (no *i = list; i != NULL; i = i->proximo)
    {
        no *menor = i;
        for (no *j = i->proximo; j != NULL; j = j->proximo)
        {
            if (j->numero < menor->numero)
            {
                menor = j;
            }
        }
        // Troca os valores de i e menor
    if (menor != i)
    {
        int temp = i->numero;
        i->numero = menor->numero;
        menor->numero = temp;
    }

    for (no *tmp = list; tmp != NULL; tmp = tmp->proximo)
    {
        printf("%i\n", tmp->numero);
    }
}
}
