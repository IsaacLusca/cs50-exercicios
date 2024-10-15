#include <stdio.h>
#include <string.h>

int main(void)
{

    char word1[100];
    char word2[100];
    char merged[200];
    int i = 0, j = 0, k = 0;
    scanf("%s", word1);
    scanf("%s", word2);

    while (word1[i] != '\0' || word2[j] != '\0')
    {
        if (word1[i] != '\0')
        {
            merged[k++] = word1[i++];
        }
        if (word2[j] != '\0')
        {
            merged[k++] = word2[j++];
        }
    }

    printf("%s\n", merged);
    return 0;
}
