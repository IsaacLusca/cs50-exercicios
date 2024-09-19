#include<stdio.h>
#include<cs50.h>

int main(void){

int n;
do{
    n = get_int("Tamanho: ");
} while (n < 1);

for (int i = 0; i < n; i++)
    {
        for (int j = 0; i < j; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

//Alguns dos passos seria??
//Um for para as quebras de linha \n
//Outro for para as hashtags
//como vou fazer para adicionar uma hashtag e depois incrementar outra na linha de baixo?
