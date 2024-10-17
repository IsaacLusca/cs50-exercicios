#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
    int *flowerbed = malloc(flowerbedSize * sizeof(int));

    for (int i = 0; i < flowerbedSize; i++)
    {
        if ((flowerbed + i) == 0)
        {
            if (i)
            // Irei implementar aqui.
        }
    }
}

int main()
{
    // Caso de teste 1
    int flowerbed1[] = {1,0,1,0,1,0,1};
    int n1 = 0;
    int size1 = sizeof(flowerbed1) / sizeof(flowerbed1[0]);
    bool result1 = canPlaceFlowers(flowerbed1, size1, n1);
    printf("Test 1: %s\n", result1 ? "true" : "false"); // Esperado: true

}

    // for (int i = 0; i < flowerbedSize; i++) {
    //     // Verifica se a posição atual está vazia
    //     if (flowerbed[i] == 0) {
    //         // Verifica se pode plantar na posição atual
    //         if ((i == 0 || flowerbed[i - 1] == 0) && (i == flowerbedSize - 1 || flowerbed[i + 1] == 0)) {
    //             // Planta a flor
    //             flowerbed[i] = 1;
    //             n--;

    //             // Se todas as flores foram plantadas, retorna true
    //             if (n == 0) {
    //                 return true;
    //             }
    //         }
    //     }
    // }
    // return false;
