#include <stdio.h>
#include <stdlib.h>

int main() {

    int a;
    int b;
    int s;
    scanf("a: %i\n", &a);
    scanf("b: %i\n", &b);
    scanf("s: %i\n", &s);

    int maiorAB = (a + b + abs(a-b))/2;

    if (maiorAB > s)
    {
        printf("%i eh o maior\n", maiorAB);
    }
    else
    {
        printf("%i eh o maior\n", s);
    }

    return 0;
}
