#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main() {
    string strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};
    string s = get_string("Nome: ");

    for (int i = 0; i < 6; i++)
    {
        if(strcmp(s, strings[i]) == 0)
        {
            printf("Encontrado\n");
            return 0;
        }
    }
    printf("Não encontrado\n");
    return 1;
}

    // // Busca linear
    // int num[] = {20, 500, 10, 5, 100, 1, 50};

    // int n = get_int("Número: ");

    // for (int i = 0; i < 7; i++)
    // {
    //     if (n == num[i])
    //     {
    //         printf("Encontrado\n");
    //         return 0;
    //     }

    // }
    // printf("Não encontrado\n");
    // return 1;
