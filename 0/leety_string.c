#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * mergeAlternately(char * word1, char * word2)
{
    int t1 = strlen(word1);
    int t2 = strlen(word1);
    char *merged = malloc((t1 + t2 + 1) * sizeof(char));

    while(word1 != '\0' || word2 != '\0')
    {
        
    }
}

int main(void)
{
    char *palavra1 = "abc";
    char *palavra2 = "pqr";

    char *mesclar = mergeAlternately(palavra1, palavra2);

    printf("%s\n", mesclar);
}
