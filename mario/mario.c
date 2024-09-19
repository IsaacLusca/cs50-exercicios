#include<stdio.h>
#include<cs50.h>

int main(void) {
    int n;

    do {
        n = get_int("Tamanho: ");
    } while (n < 1);

    for (int i = 0; i < n; i++) {
        printf("%*s", n - i, ""); // Imprime espaços
        printf("%.*s\n", i + 1, "###################################################################"); // Imprime hashes
    }
}
