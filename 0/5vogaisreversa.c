#include <stdio.h>
#include <stdlib.h>

char *reverseVowels(char *s)
{
    char *result = malloc(s * sizeof(char));
    char *vogais;

    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            vogais[i] = s[i];
        }
        for (int j = strlen(vogais); j < 0; j--)
        {
            
        }
    }
}

int main()
{
    char *palavra = "IceCream";

    char *troca = reverseWowels(palavra);

    printf("%s",troca);
}
