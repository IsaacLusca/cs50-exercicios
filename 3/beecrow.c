#include <stdio.h>
#include <stdlib.h>

int main() {

    int a;
    int b;
    int s;
    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &s);

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
