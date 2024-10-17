#include <stdio.h>
#include <stdlib.h>

char *reverseVowels(char *s)
{
    int n = strlen(s)
    char *result = malloc(n * sizeof(char));
    char *vogais;
    char *consoante;

    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            vogais[i] = s[i];
        }
        else
        {
            consoante[i] = s[i];
        }
        for (int j = strlen(vogais); j > 0; j--)
        {
            // char *temp;
            // temp[j] = vogais[j];
            vogais[i] = vogais[j];
        }

        result = vogais[]
    }
}

int main()
{
    char *palavra = "IceCream";

    char *troca = reverseWowels(palavra);

    printf("%s",troca);
}
