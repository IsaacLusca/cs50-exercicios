#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* gcdOfStrings(char* str1, char* str2)
{
    int comp1 = strlen(str1);
    int comp2 = strlen(str2);
// forma de comparar raiz
    // if (comp1 < comp2)
    // {
    //     menor = comp1;
    // }
    // else
    // {
    //     menor = comp2;
    // }
    int menor = (comp1 < comp2) ? comp1 : comp2;
    char *divisor = malloc((menor + 1) * sizeof(char));
    if (divisor == NULL)
    {
        printf("Erro ao alocar\n");
        return NULL;
    }

    int i = 0, j = 0;
    char *temp;

    while (comp1[i] != '\0' || comp2[i] != '\0')
    {
        if (strcmp(comp1[i], comp2[i]) == 0)
        {
            temp = [comp1[i]];
        }
    }

}

int main()
{
    char *palavra1 = "ABC";
    char *palavra2 = "ABCDEF";

    char *divisor_comum = gcdOfStrings(palavra1, palavra2);
    printf("Divisor comum: %s\n", divisor_comum);
}
