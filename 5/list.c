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
        return 2;
    }

    tmp[3] = 4;

    for (int i = 0; i < 4; i++)
    {
        tmp[i] = list[i];
        printf("Array %i: %i\n", i + 1, tmp[i]);
    }

    free(list);
    free(tmp);
}
