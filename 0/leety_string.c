#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * mergeAlternately(char * word1, char * word2)
{
    char word1[100];
    char word2[100];
    char *merged = malloc((strlen(word1) + strlen(word2) + 1) * sizeof)
    int i = 0, j = 0, k = 0;

    while (word1[i] != '\0' || word2[j] != '\0')
    {
        if (word1[i] != '\0')
        {
            merged[k] = word1[i];
            k++;
            i++;
        }
        if (word2[j] != '\0')
        {
            merged[k] = word2[j];
            k++;
            j++;
        }
    }
    printf("%s\n", merged);
    return 0;
}
