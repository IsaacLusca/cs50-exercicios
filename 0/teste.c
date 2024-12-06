#include <stdio.h>

int mdc(int x, int y) {
    if (y == 0){
        return x;
    }
    return mdc(y, x % y);
}

int main() {
    int a = 56, b = 98;
    printf("%i\n", mdc(a, b));
}
