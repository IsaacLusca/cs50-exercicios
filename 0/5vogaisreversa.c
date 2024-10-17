#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool *checarvogal( char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        return true;
    }
}

char *reverseVowels(char *s)
{
    int n = strlen(s);
    char *vogal = malloc(n * sizeof(char));
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (checarvogal(s[i]))
        {
            vogal[count] = s[i];
            count++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (checarvogal(s[i]))
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
