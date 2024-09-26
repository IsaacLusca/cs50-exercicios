#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string nome[] = {"Carter", "David", "John"};
    string numeros[] = {"438-328-1000", "485-973-1023", "348-129-5748"};
}pessoas

int main(void)
{

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
