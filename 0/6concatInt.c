#include <stdio.h>
#include <stdlib.h>

// int* plusOne(int* digits, int digitsSize, int* returnSize) {

// }
int main() {
    const int n = 1;
    int digits[n] = {9};
    int z = n - 1;
    int count = z;
    if (digits[z] == 9)
    {
        while (digits[z] == 9)
        {
            digits[z] = 0;
            z--;
            count --;

            if (count == -1)
            {
                int *novo = malloc(n * sizeof(int));
                novo[0] = 1;
                for (int i = 1; i < n; i++)
                {
                    novo[i] = 0;
                }
                // Exibir o novo array para verificação
                for (int i = 0; i < n; i++)
                {
                    printf("%i ", novo[i]);
                }
                return *novo; // Certifique-se de que a função retorne um ponteiro, se necessário
            }
        }



        if (digits[z] != 9)
        {
            digits[z] += 1;
        }

    }
    else
    {
        digits[z] += 1;
    }


    for (int i = 0; i < n; i++)
    {
        printf("%i", digits[i]);
    }
    printf("\n%i\n", count);
}




    // int digits[] = {7,2,8,5,0,9,1,2,9,5,3,6,6,7,3,2,8,4,3,7,9,5,7,7,4,7,4,9,4,7,0,1,1,1,7,4,0,0,6};
    // int returnSize = 0;
    // int* result = plusOne(digits, 39, &returnSize);
    // printf("Resultado: ");
    // for (int i = 0; i < returnSize; i++) {
    //     printf("%d ", result[i]);
    // }
    // printf("\n");
    // free(result);
    // return 0;




    // unsigned long long num = 0;

    // for (int i = 0; i < digitsSize; i++)
    // {
    //     num = num * 10 + digits[i];
    // }
    // num = num + 1;

    // unsigned long long int tempNum = num;
    // int digitCount = 0;
    // while (tempNum > 0) {
    //     tempNum /= 10;
    //     digitCount++;
    // }

    // int* result = (int*)malloc(digitCount * sizeof(int));
    // if (result == NULL)
    // {
    //     return NULL;
    // }

    // int count = digitCount - 1;

    // while (num > 0) {
    //     int temp = num % 10;
    //     num /= 10;
    //     result[count] = temp;
    //     count--;
    // }

    // *returnSize = digitCount;
    // return result;
