#include <stdio.h>
#include <stdlib.h>

void swap(int x, int y);
int main()
{

    int a = 1;
    int b = 5;

    printf("a: %i e b: %i\n", swap(a, b));

}

void swap(int x, int y)
{
    temp = x;
    x = y;
    y = temp;
}
