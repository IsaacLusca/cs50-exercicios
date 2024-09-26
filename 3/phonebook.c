#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string nome;
    string numeros;
}
person;
// string nome[] = {"Carter", "David", "John"};
// string numeros[] = {"438-328-1000", "485-973-1023", "348-129-5748"};

int main(void)
{
    person pessoa[3];

    pessoa[0].nome = "Carter";
    pessoa[0].numeros = "438-328-1000";

    pessoa[1].nome = "David";
    pessoa[1].numeros = "485-973-1023";

    pessoa[2].nome = "John";
    pessoa[2].numeros = "348-129-5748";

    string s = get_string("Nome: ");

    for (int i = 0; i < 3; i++)
    {
        if(strcmp(pessoa[i].nome, s) == 0)
        {
            printf("Número: %s\n", pessoa[i].numeros);
            return 0;
        }
    }
    printf("Não encontrado");
    return 1;
}
