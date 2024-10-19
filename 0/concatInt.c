#include <stdio.h>
#include <stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int num = 0;
    int count = 0;

    for (int i = 0; i < digitsSize; i++)
    {
        num = num * 10 + digits[i];
        count++;
    }
    num = num + 1;

    count = count - 1;
    int *result = malloc(count * sizeof(int));
    while (num > 0)
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
