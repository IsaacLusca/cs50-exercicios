#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* gcdOfStrings(char* str1, char* str2)
{
    int comp1 = strlen(str1);
    int comp2 = strlen(str2);
    int menor;
    if (comp1 < comp2)
    {
        menor = comp1;
    }
    else
    {
        menor = comp2;
    }

    char *divisor = malloc((menor + 1) * sizeof(char));

}

int main()
{
    char *palavra1 = "ABC";
    char *palavra2 = "ABCDEF";

    char *divisor_comum = gcdOfStrings(palavra1, palavra2);
    printf("Divisor comum: %s\n", divisor_comum);
}
