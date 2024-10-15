#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
    
}

int main()
{
    char palavra1[] = "ABCABC";
    char palavra2[] = "ABC";

    char *divisor_comum = gcdOfStrings(palavra1, palavra2);
    printf("Divisor comum: %s\n", divisor_comum);
}
