#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string name[] = {"Carter", "David", "John"};
    string numbers[] = {"438-328-1000", "485-973-1023", "348-129-5748"};

    string s = get_string("Nome: ");

    for (int i = 0; i < 3; i++)
    {
        if(strcmp(name[i], s))
        {
            printf("Número: %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Não encontrado");
    return 1;
}
