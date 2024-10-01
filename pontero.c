#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temp, a, b;
    a = 1;
    b = 2;

    temp = a;
    a = b;
    b = temp;
    printf("a: %i e b: %i\n", a, b);
}
