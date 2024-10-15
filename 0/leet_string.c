#include <stdio.h>
#include <string.h>

int main(void)
{

    char word1 = '\0';
    scanf("%s", word1);
    char word2 = '\0';
    scanf("%s", word2);
    char merged = '\0';

    for (int i = 0, n = strlen(word1), x = strlen(word2); i < n || i < x; i++)
    {
        merged[i] = word1[i] + word2[i];
    }

    printf("%s", *merged);
}
