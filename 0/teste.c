#include <stdio.h>

void tabelaAdicao(int n) {
    printf("Tabela Z_%d para adição modular:\n", n);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%d ", (i + j) % n);
        }
        printf("\n");
    }
}

int main(){
    int n = 5;
    tabelaAdicao(n);
}
