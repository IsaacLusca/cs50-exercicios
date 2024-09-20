#include <cs50.h>
#include <stdio.h>

#define A 1
#define B 5
#define C 10
#define D 25

int main(void)
{
    int valor;
    int moeda;
    int n;

    do
    {
        valor = get_int("Change owed: ");
    }
    while (valor < 0);

    int a = valor / A;
    int b = valor / B;
    int c = valor / C;
    int d = valor / D;

    if (valor >= 25)
    {
        moeda = a + b + c + d;
        printf("%i\n", moeda);
    }
    if (valor >= 10 && valor < 25)
    {
        moeda = a + b + c;
        printf("%i\n", moeda);
    }
    if (valor >= 5 && valor < 10)
    {
        moeda = a + b;
        printf("%i\n", moeda);
    }
    if (valor >= 1 && valor < 5)
    {
        moeda = a;
        printf("%i\n", moeda);
    }

}

//O que devo fazer?
// solicitar o troco









    // if (valor < 5)
    // {
    //     int n = valor / A;
    //     valor = A * n;
    //     printf("%i\n", n);
    // }

    // if (valor >= 5 && valor < 10)
    // {
    //     int n = valor / A;
    //     int z = valor / B;
    //     valor = (B * z) + (A * n);
    //     printf("%i\n", z + n);
    // }

    // if (valor >= 10 && valor < 25)
    // {
    //     int n = valor / A;
    //     int z = valor / B;
    //     int y = valor / C;
    //     valor = (C * y) + (A * n) + (B * z);
    //     printf("%i\n", y + n + z);
    // }

