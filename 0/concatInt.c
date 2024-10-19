#include <stdio.h>
#include <stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int num = 0;
    int *result = malloc((digitsSize + 1) * sizeof(int));
    int count = 0;

    for (int i = 0; i < digitsSize; i++)
    {
        num = num * 10 + digits[i];
        count++;
    }
    num = num + 1;

    while (num > 0 &&  num < count)
    {
        int temp = 0;
        temp = num % 10;
        num = num / 10;
        result[count] = temp;
        count--;
    }
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
