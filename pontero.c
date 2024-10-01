#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y);
int main()
{

    int a = 1;
    int b = 5;

    swap(a, b);
    printf("a: %i e b: %i\n", a, b);
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
