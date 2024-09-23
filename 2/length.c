#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string nome = get_string("Nome: ");

    int n = 0;
    // Enquanto nome for diferente de \0, faça
    // while (nome[n] != '\0')
    // {
    //     n++;
    // }

    for (int i = n; i != '\0'; i++)
    {
        nome[i] = nome[i++];
    }

    printf("O nome %s tem %i caracteres\n", nome, n);

}
