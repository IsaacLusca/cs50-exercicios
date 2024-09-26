#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string name[3][3] = {"Carter", "David", "John", "438-328-1000", "485-973-1023", "348-129-5748"};

    string s = get_string("Nome: ");

    for (int i = 0; i < 3; i++)
    {
        if(strcmp(name[i], s))
        {
            printf("Número: %s\n", name[][i]);
            return 0;
        }
    }
    printf("Não encontrado");
    return 1;
}
