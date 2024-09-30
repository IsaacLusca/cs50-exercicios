#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = "HI!";
    printf("%p\n", s);
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);
    printf("%p\n", &s[4]);
}



// ponteiro é o endereço de alguma variável
    // int n = 50;
    // int *p = &n;
    // printf("O num %i está armazenado no endereço %p\n", n, p);

// vai para o endereço p e exibe o que está armazenado dentro dele.
// printf("%i\n", *p);
