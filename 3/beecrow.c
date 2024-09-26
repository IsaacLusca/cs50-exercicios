#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[26] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26};
    int x = 100;
    for (int i = 0; i < 26 ; i++)
    {
        if (x < matriz[26/2])
        {
            printf("%i - O valor está na matriz!\n", i+1);
        }
    }
    return 2;
}
