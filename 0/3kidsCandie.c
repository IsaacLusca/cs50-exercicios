#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    // tera um array de candies que cada criança possui
    // tera um extraCandie que sera somado para cada criança

    bool *result = malloc(candiesSize * sizeof(bool));

    int maxCandies = candies[0];

    for (int i = 0; i < candiesSize; i++)
    {
        maxCandies = (maxCandies > candies[i]) ? maxCandies: candies[i];
        // if (candies[i] > maxCandies)
        // {
        //     maxCandies = candies[i];
        // }
    }

    for (int i = 0; i < candiesSize; i++)
    {
        int totalCandies = candies[i] + extraCandies;

        result[i] = (totalCandies >= maxCandies) ? true:false;

        // if (totalCandies >= maxCandies)
        // {
        //     result[i] = true;
        // }
        // else
        // {
        //     result[i] = false;
        // }
    }

    *returnSize =  candiesSize;
    return result;
}


int main() {
    int candies[] = {2, 3, 5, 1, 3};
    int extraCandies = 3;
    int returnSize;

    // Chamada da função
    bool* result = kidsWithCandies(candies, 5, extraCandies, &returnSize);

    // Impressão do resultado
    for (int i = 0; i < returnSize; i++) {
        printf("Criança %i: %s\n", i + 1, result[i] ? "true" : "false");
    }

    // Libera a memória alocada
    free(result);
    return 0;
}
