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
    int n = valor / A;
    int z = valor / B;
    int y = valor / C;
    do
    {
        valor = get_int("Change owed: ");
    }
    while (valor < 0);

    if (valor < 5)
    {
        n = valor / A;
        troco = A * n;
        printf("%i\n", n);
    }

    if (valor >= 5 && valor < 10)
    {
        n = valor / A;
        troco = (B * z) + (A * n);
        printf("%i\n", z + n);
    }

    if (valor >= 10 && valor < 25)
    {
        n = valor / A;
        z = valor / B;
        troco = (C * y) + (A * n) + (B * z);
        printf("%i\n", y + n + z);
    }
}
