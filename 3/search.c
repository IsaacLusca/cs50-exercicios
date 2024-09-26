#include <stdio.h>
#include <cs50.h>

int main() {
    int num[] = {20, 500, 10, 5, 100, 1, 50};

    int n = get_int("Número: ");

    // Busca linear
    for (int i = 0; i < 7; i++)
    {
        if (n == num[i])
        {
            printf("Encontrado\n");
            return 1;
        }

    }
    printf("Não encontrado\n");
    return 0;
}
