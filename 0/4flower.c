#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {

    int checar[n];
    for (int i = 0; i < flowerbedSize; i++)
    {
        if (flowerbed[i] == 0)
        {
            if ((i == 0 || flowerbed[i - 1] == 0) && (i == flowerbedSize || flowerbed[i] == 0))
            {
                flowerbed[i] = 1;
                n--;
            }
        }
    }

}
