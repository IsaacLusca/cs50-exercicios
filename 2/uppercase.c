#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string s = get_string("Antes: ");
    for(int i = 0, n = strlen(s); i < n; i++)
    {
        // Se o lowercase estiver entre a e z
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", toupper(s[i]));
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}
