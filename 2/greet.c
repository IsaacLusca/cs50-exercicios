#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string pergunta = get_string("Seu nome? ");
    printf("Olá, %s\n", pergunta);
}
