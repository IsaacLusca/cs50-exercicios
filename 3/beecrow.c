#include <stdio.h>

int main() {

    int a;
    int b;
    int s;
    scanf("a: %i\n", &a);
    scanf("b: %i\n", &b);
    scanf("s: %i\n", &s);

    int maiorAB = (a + b + a*b*s*(a-b))/2;

    printf("maior: %i\n", maiorAB);

    return 0;
}
