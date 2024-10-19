#include <stdio.h>
#include <stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int num = 0;
    int *result = malloc(sizeof(int));
    int n = 0;

    for (int i = 0; i < digitsSize; i++)
    {
        num = num * 10 + digits[i];
    }
    num = num + 1;

    while (num > 0)
    {
        int *temp = 0;
        temp = num % 10;
        result[n] = temp;
        num = num / 10;
        n++;
    }
    return result;
}

int main()
{
    int n tamanho = 2;
    int numeros[2] = {1, 2, 3};

    int result = plusOne(numeros);

    printf("")

}
