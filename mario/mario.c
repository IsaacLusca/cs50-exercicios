#include <cs50.h>
#include <stdio.h>

int main(void) {
    int n;

    // do {
    //     n = get_int("Tamanho: ");
    // } while (n < 1);

    for (int i = 0; i < 5; i++) {
        printf("%*s", 5 - i, ""); // Imprime espaços
        printf("%.*s\n", i + 1, "#############################"); // Imprime hashes
    }
}
