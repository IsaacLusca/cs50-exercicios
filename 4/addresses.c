// #include <cs50.h>
#include <stdio.h>
#include <strlen.h>

int main(void)
{
    char *s = "HI!";

    for (int i = 0 n = strlen(s); i < n; i++)
    {
        printf("%c", s[i]);
    }

    // printf("%s\n", s);

    // printf("%p\n", &s[0]);
    // printf("%p\n", &s[1]);
    // printf("%p\n", &s[2]);
    // printf("%p\n", &s[3]);
}

    // Em C não existe "string"
    // string s = "HI!";


// ponteiro é o endereço de alguma variável
    // int n = 50;
    // int *p = &n;
    // printf("O num %i está armazenado no endereço %p\n", n, p);

// vai para o endereço p e exibe o que está armazenado dentro dele.
// printf("%i\n", *p);
