#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// função auxiliar para calcular gcd do comprimento.
// Função auxiliar para calcular o gcd do comprimento
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
    // 1 - Armazenar o comprimento
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // 2 - Armazenando o mdc
    int mdc = gcd(len1, len2);

    // 3 - Candidata a divisor
    char* divisor = (char*)malloc((mdc + 1) * sizeof(char)); // +1 para o terminador nulo
    strncpy(divisor, str1, mdc);
    divisor[mdc] = '\0'; // Garantindo que a string é terminada corretamente

    // 4 - Verificar a divisibilidade para str1
    int i = 0;
    while (i < len1) {
        if (strncmp(divisor, str1 + i, mdc) != 0) {
            free(divisor); // Liberar a memória alocada
            return ""; // Retornar string vazia
        }
        i += mdc; // Incrementar i em mdc manualmente
    }

    // 5 - Verificar a divisibilidade para str2
    i = 0; // Reiniciar i para str2
    while (i < len2) {
        if (strncmp(divisor, str2 + i, mdc) != 0) {
            free(divisor); // Liberar a memória alocada
            return ""; // Retornar string vazia
        }
        i += mdc; // Incrementar i em mdc manualmente
    }

    return divisor; // Retornar o divisor
}

int main()
{
    char palavra1[] = "LEET";
    char palavra2[] = "CODE";

    char *divisor_comum = gcdOfStrings(palavra1, palavra2);
    printf("Divisor comum: %s\n", divisor_comum);
}
