#include<stdio.h>
#include<cs50.h>

int div(int a, int b);
int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");

    printf("%0.3f \n", div(x, y));
}

int div (int a, int b)
{
    return a / b;
}
