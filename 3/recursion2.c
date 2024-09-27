#include <cs50.h>
#include <stdio.h>

int fatorial(int n);

int main(void)
{
    int n;

    do
    {
        n = get_int("n: ");
    }
    while (n < 0);

    printf("%i\n", fatorial(n));
}

int fatorial(int n)
{
    // Caso base
    if (n == 1)
    {
        printf("%i = ", n);
        return 1;
    }
    printf("%i * ", n);

    return n * fatorial(n - 1);
}



// CALCULO FATORIAL SEM RECURSÃO

// int main(void)
// {
//     int resultado = 1;
//     int n = get_int("Fatorial de: ");

//     for (int i = n; i > 0 ; i--)
//     {
//         resultado *= i;
//         if (i != 1)
//         {
//             printf("%i * ", i);
//         }
//         else
//         {
//             printf("%i", i);
//         }
//     }

//     printf(" = %i\n", resultado);
// }
