#include<stdio.h>
#include<cs50.h>

int div(int a, int b);
int main(void)
{
    float x = get_int("x: ");
    float y = get_int("y: ");

    printf("%f \n", div(x, y));
}

int div (float a, float b)
{
    return a / b;
}
