#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string pergunta = get_string("Qual o seu nome? ");
    printf("Ola, %s \n", pergunta);
}
