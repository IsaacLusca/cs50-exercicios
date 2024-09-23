#include <cs50.h>
#include <stdio.h>
#include <string.h>


int main(void)
{
    string nome = get_string("Nome: ");
    int lenght = strlen(nome);

    printf("O nome %s tem %i caracteres\n", nome, lenght);

}

