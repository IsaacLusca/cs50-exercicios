#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("S: ");
    // Está atribuindo e dizendo que o endereço de S é o mesmo que T
    string t = s;

    t[0] = toupper(t[0]);

    printf("%s\n", s);
    printf("%s\n", t);
}
