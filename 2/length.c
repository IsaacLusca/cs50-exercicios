#include <cs50.h>
#include <stdio.h>

int string_comprimento (string c);

int main(void)
{
    string nome = get_string("Nome: ");

    // Enquanto nome for diferente de \0, faça
    // while (nome[n] != '\0')
    // {
    //     n++;
    // }

    int lenght = string_comprimento(nome);

    printf("O nome %s tem %i caracteres\n", nome, lenght);

}

int string_comprimento(string c)
{
    int n = 0;
    for (int i = 0; c[i] != '\0'; i++)
    {
        if (c[i] == ' ')
        {
            n--;
        }
        n++;
    }
}
