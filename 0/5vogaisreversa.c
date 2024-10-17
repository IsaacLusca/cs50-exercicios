#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool *checarvogal( char *s)
{
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

char *reverseVowels(char *s)
{
    int n = strlen(s);
    char *vogal = malloc(n * sizeof(char));
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (checarvogal(s) == true)
        {
            vogal[count] = s[i];
            count++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (checarvogal(s) == true)
        {
            --count;
            s[i] = vogal[count];
        }
    }
    free(vogal);
    return s;
}

int main()
{
    char palavra[] = "IceCreAm";

    char *troca = reverseVowels(palavra);

    printf("%s\n", troca);
}
