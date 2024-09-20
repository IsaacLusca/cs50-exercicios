#include <cs50.h>
#include <stdio.h>

#define A 1
#define B 5
#define C 10
#define D 25

int main(void)
{
    int valor;
    int moeda = 0;
    int n;

    do
    {
        valor = get_int("Change owed: ");
    }
    while (valor < 0);

    while (valor >= D)
    {
        moeda++;
        valor -= D;
    }

    while (valor >= C)
    {
        moeda++;
        valor -= C;
    }

    while (valor >= B)
    {
        moeda++;
        valor -= B;
    }

    while (valor >= A)
    {
        moeda++;
        valor -= A;
    }

    printf("%i\n", moeda);
}


