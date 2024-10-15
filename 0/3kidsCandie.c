#include <stdio.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
// bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
//     // tera um array de candies que cada criança possui
//     // tera um extraCandie que sera somado para cada criança

// }


int main()
{
    int n = 3;
    int crianca[n];
    crianca[0] = 2;
    crianca[1] = 3;
    crianca[2] = 5;


    const int x = 10;
    bool check[n];
    for (int i = 0; i < crianca[i]; i++)
    {
        crianca[i] += x;
        if ((crianca[i] += x) >= 13)
        {
            check[i] = true;
            printf("Criança %i: %i true\n ", i + 1, crianca[i]);
        }
        else
        {
            check[i] = false;
            printf("Criança %i: %i false\n ", i + 1, crianca[i]);
        }
    }


}
