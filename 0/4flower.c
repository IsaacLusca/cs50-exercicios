#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
    for (int i = 0; i < flowerbedSize; i++) {
        // Verifica se a posição atual está vazia
        if (flowerbed[i] == 0) {
            // Verifica se pode plantar na posição atual
            if ((i == 0 || flowerbed[i - 1] == 0) && (i == flowerbedSize - 1) || flowerbed[i + 1] == 0) {
                // Planta a flor
                flowerbed[i] = 1;
                n--;

                // Se todas as flores foram plantadas, retorna true
                if (n == 0) {
                    return true;
                }
            }
        }
    }
    return false;
}
