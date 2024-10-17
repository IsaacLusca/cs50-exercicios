#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
    for (int i = 1; i < flowerbedSize; i++)
    {
        if (flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0)
        {
            flowerbed[i] == 1;
            n--;

            if (n == 0)
            {
                return true;
            }
        }
    }
    return false;
}
