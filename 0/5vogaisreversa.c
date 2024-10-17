#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *reverseVowels(char *s)
{
    int n = strlen(s);
    char *vogal = malloc(n * sizeof(char));
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
            s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'
            )
        {
            vogal[count] = s[i];
            count++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
        s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'
        )
        {
            s[i] = vogal[count];
            --count;
        }
    }
    return s;
}

int main()
{
    char *palavra = "IceCream";

    char *troca = reverseVowels(palavra);

    printf("%s\n", troca);
}
