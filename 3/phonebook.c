#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string nome;
    string numeros;
}
person;

int main(void)
{
    person pessoa[3];

    string s = get_string("Nome: ");

    for (int i = 0; i < 3; i++)
    {
        if(strcmp(nome[i], s))
        {
            printf("Número: %s\n", numeros[i]);
            return 0;
        }
    }
    printf("Não encontrado");
    return 1;
}
