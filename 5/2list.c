#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    // aponta para o next
    struct node *next;
} node;

int main(int argc, char *argv[])
{
    node *list = NULL;

    for (int i = 0; i < argc; i++)
    {
        // converter letra para numero int
        int number = atoi(argv[i]);

        // criando o nó temporario
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            // libere memoria
            return 1;
        }
        // a struct int number recebe o numero digitado
        n->number = number;

        //inicializar um novo no para apontar para lista existente
        n->next = list;
        list = n;
    }
}
