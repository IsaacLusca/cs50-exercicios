#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int resultado = 0;
    int n = get_int("Fatorial de: ");

    for (int i = n; i > 0 ; i--)
    {
        i = i * (i - 1);
    }

    printf("resultado: %i\n", n);
}
