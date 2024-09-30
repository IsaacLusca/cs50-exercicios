#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char *s = get_string("S: ");
    // Para atribuir o valor de S, não o endereço para t:
    // alocação de memoria-malloc(qtd bytes-(num))
    char *t = malloc(strlen(s) + 1);
    // Se malloc retornar null, significa que não há espaço
    if (t == NULL)
    {
        return 1;
    }

    for (int i = 0, n = strlen(s); i < n + 1; i++)
    {
        t[i] = s[i];
    }

    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    printf("%s\n", s);
    printf("%s\n", t);
}

    // string s = get_string("S: ");
    // // Está atribuindo e dizendo que o endereço de S é o mesmo que T
    // string t = s;

    // t[0] = toupper(t[0]);

    // printf("%s\n", s);
    // printf("%s\n", t);
