#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int x = get_int("Valor de X");
    int y = get_int("Valor de Y");

    if (x > y)
    {
        printf("%i e maior que %i\n", x, y);
    }
    else if (x < y)
    {
        printf("%i e menor que %i\n", x, y);
    }
    else printf("%i e %i sao iguais", x, y);
}
