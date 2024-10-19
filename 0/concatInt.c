#include <stdio.h>
#include <stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int num = 0;

    for (int i = 0; i < digitsSize; i++)
    {
        num = num * 10 + digits[i];
    }
    num = num + 1;

    int tempNum = num;
    int digitCount = 0;

    while (tempNum > 0) {
        tempNum /= 10;
        digitCount++;
    }

    int* result = (int*)malloc(digitCount * sizeof(int));
    int count = digitCount - 1; // Inicializa o count corretamente

    while (num > 0) {
        int temp = num % 10;
        num /= 10;
        result[count] = temp;
        count--;
    }

    *returnSize = digitCount;
    return result;
}

int main() {
    int digits[] = {1, 2, 3};
    int returnSize = 0;
    int* result = plusOne(digits, 3, &returnSize);
    printf("Resultado: ");
    for (int i = 0; i < returnSize; i++) {
        printf("%d", result[i]);
    }
    printf("\n");
    free(result);
    return 0;
}
