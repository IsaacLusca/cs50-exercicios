#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// função auxiliar para calcular gcd do comprimento.
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

char *gcdOfStrings(char* str1, char* str2)
{
    // 1 - armazenar o comprimento.
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // 2 - armazenando o mdc
    int mdc = gcd(len1, len2);

    // strings conjuntas que podems er as divisoras
    // e armazenando-as dinamicamente e checando a parte que seria a candidada a ser a divisora
    char *divisor = malloc((mdc + 1) * sizeof(char));
    strncpy(divisor, str1, mdc);
    divisor[mdc] = '\0';

    // verificar a divisibilidade de str1
    int i = 0;

    while (i < len1)
    {
        if (strncmp(divisor, &str1[i], mdc) != 0)
        {
            free(divisor);
            return "";
        }
        i += mdc;
    }

    while (i < len2)
    {
        if(strncmp(divisor, &str2[i], mdc) != 0)
        {
            free(divisor);
            return "";
        }
        i += mdc;
    }
    return divisor;
}

int main()
{
    char palavra1[] = "LEET";
    char palavra2[] = "CODE";

    char *divisor_comum = gcdOfStrings(palavra1, palavra2);
    printf("Divisor comum: %s\n", divisor_comum);
}
