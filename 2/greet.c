#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv [])
{
    // string pergunta = get_string("Seu nome? ");
    if (argc == 2)
    {
        printf("Olá, %s\n", argv[1]);
    }
    else
    {
        prinft("Deu erro!\n");
    }
}
