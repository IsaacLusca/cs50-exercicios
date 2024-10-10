#include <stdio.h>
#include <stdlin.h>

typedef struct no
{
    int numero;
    struct no *proximo;
} no;

int main(int argc, char *argv[])
{
    node *list = NULL;

    for (int i = 1; i < argc; i++)
    {
        int valor = atoi(argv[i]);
        node *n = malloc(sizeof(node));

        if (n == NULL)
        {
            return 1;
        }

        n->numero = valor;
        
    }
}
