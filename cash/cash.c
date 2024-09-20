#include <cs50.h>
#include <stdio.h>

#define A 1
#define B 5
#define C 10
#define D 25

int main(void)
{
    int valor;
    int troco;
    int n;
    do
    {
        valor = get_int("Change owed: ");
    }
    while (valor < 0);

    if (valor < 5)
    {
        n = valor / A;
        troco = A * n;
        printf("%i\n", troco);
    }

    if (valor < 10)
    {
        n = valor / B;
        troco = B + (A * n);
        printf("%i\n", troco);
    }
}
