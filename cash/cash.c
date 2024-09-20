#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int valor;
    do
    {
        valor = get_int("Change owed: ");
    }
    while (valor < 1 || valor >= 100);

    printf("%i", valor);
}
