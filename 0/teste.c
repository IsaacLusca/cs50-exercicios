#include <stdio.h>

int mdc(int x, int y) {
    if (y == 0){
        return x;
    }
    return mdc(y, x % y);
}

int mmc(int a, int b) {
    return (a * b) / mdc(a, b);
}

int main() {
    int a = 20, b = 24;
    printf("%i\n", mmc(a, b));
}
