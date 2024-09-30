#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char *s = get_string("S: ");
    // Para atribuir o valor de S, não o endereço para t:
    // malloc()
    char *t = ;

    t[0] = toupper(t[0]);

    printf("%s\n", s);
    printf("%s\n", t);
}

    // string s = get_string("S: ");
    // // Está atribuindo e dizendo que o endereço de S é o mesmo que T
    // string t = s;

    // t[0] = toupper(t[0]);

    // printf("%s\n", s);
    // printf("%s\n", t);
