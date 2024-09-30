#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n;
    printf("O num %i está armazenado no endereço %p\n", n, p);
}

// ponteiro é o endereço de alguma variável

// vai para o endereço p e exibe o que está armazenado dentro dele.
// printf("%i\n", *p);
