#include <stdio.h>
#include <string.h>

int main(void)
{

    char word1[100];
    char word2[100];
    char merged[200];
    scanf("%s", word1);
    scanf("%s", word2);

    for (int i = 0, n = strlen(word1), x = strlen(word2); i < n || i < x; i++)
    {
        merged[i] = word1[i];
        merged[i + 1] = word2[i];
    }
    printf("%s\n", merged);
    return 0;
}
