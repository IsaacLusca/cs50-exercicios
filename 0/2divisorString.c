#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// função auxiliar para calcular gcd do comprimento.
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

char* gcdOfStrings(char* str1, char* str2)
{
    // 1 - armazenar o comprimento.
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // 2 - armazenando o mdc
    int mdc = gcd(len1, len2);


}

int main()
{
    char palavra1[] = "ABCABC";
    char palavra2[] = "ABC";

    char *divisor_comum = gcdOfStrings(palavra1, palavra2);
    printf("Divisor comum: %s\n", divisor_comum);
}
