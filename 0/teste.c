#include <stdio.h>

int mdc(int x, int y) {
    if (y == 0){
        return x;
    }
    return mdc(y, x % y);
}

int main() {
    int a = 20, b = 24;
    printf("%i\n", mdc(a, b));
}
