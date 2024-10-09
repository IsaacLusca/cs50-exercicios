#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *list = malloc(3 * sizeof(int));
    if (list == NULL)
    {
        return 1;
    }

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    int *tmp = malloc(4 * sizeof(int));
    // como list ja executou quando o programa é encerrado,
    // é preciso liberar a memória
    if (tmp == NULL)
    {
        free(list);
        return 1;
    }


    for (int i = 0; i < 4; i++)
    {
        tmp[i] = list[i];
    }
    // com o novo array criado, pode liberar o array list
    tmp[3] = 4;

    free(list);

    for (int i = 0; i < 4; i++)
    {
        printf("Array %i: %i\n", i + 1, tmp[i]);
    }


    free(tmp);
}
