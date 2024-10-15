#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isDivisible(char* str, char* sub)
{
    int len_str = strlen(str);
    int len_sub = strlen(sub);

    if (len_str % len_sub != 0) {
        return 0;
    }

    // Verifica se "sub" pode ser concatenado para formar "str"
    for (int i = 0; i < len_str; i++) {
        if (str[i] != sub[i % len_sub]) {
            return 0;
        }
    }

    return 1;
}

char* gcdOfStrings(char* str1, char* str2)
{
    int comp1 = strlen(str1);
    int comp2 = strlen(str2);

    // Encontrar o comprimento do menor divisor possível
    int menor = (comp1 < comp2) ? comp1 : comp2;

    // Alocar memória para o divisor comum
    char* divisor = malloc((menor + 1) * sizeof(char));
    if (divisor == NULL)
    {
        printf("Erro ao alocar memória\n");
        return NULL;
    }

    // Tentar todas as possíveis substrings de tamanho decrescente
    for (int i = menor; i > 0; i--)
    {
        strncpy(divisor, str1, i);  // Copiar os primeiros i caracteres de str1 para divisor
        divisor[i] = '\0';          // Adicionar o terminador nulo

        // Verificar se divisor divide ambas as strings
        if (isDivisible(str1, divisor) && isDivisible(str2, divisor))
        {
            return divisor;  // Retornar a substring que é o divisor comum
        }
    }

    // Se não houver divisor comum, retornar uma string vazia
    free(divisor);
    return "";
}

int main()
{
    char palavra1[] = "ABCABC";
    char palavra2[] = "ABC";

    char *divisor_comum = gcdOfStrings(palavra1, palavra2);
    printf("Divisor comum: %s\n", divisor_comum);
}
