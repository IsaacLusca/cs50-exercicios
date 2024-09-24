#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

int string_comprimento(string c);
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
    return n;
}

// Palavras longas tem um "maior nível"
// Frases longas tem um "Maior

    // Ignora os espaços vazios
    // for (int i = 0; i < strlen(texto); i++)
    // {
    //     if (texto [i] != ' ')
    //     {
    //         t++;
    //     }
    // }

    // for (int i = 0; i < strlen(texto); i++)
    // {
    //     if (texto[i] == ' ')
    //     {
    //         palavra[n] = t;
    //         n++;
    //         t = 0; // Reinicia o contador de comprimento da palavra
    //     }
    //     else
    //     {
    //         t++; // Incrementa o comprimento da palavra atual
    //     }
    // }
