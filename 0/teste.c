#include <stdio.h>

void t_mt(int n) {
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%d ", (i * j) % n);
        }
        printf("\n");
    }
}

int main() {
    int n = 5;
    t_mt(n);
    
}
