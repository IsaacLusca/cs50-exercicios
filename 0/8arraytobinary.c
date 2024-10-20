#include <stdio.h>
#include <stdlib.h>

// Estrutura de uma arvore
// Uma árvore vai ser dois ponteiros
// Um para direita e esquerda.
typedef struct no
{
    int valor;
    struct no *direita;
    struct no *esquerda;
} noArv;

// Para a inserção, defina uma variavel do tipo nó
// e passe os valores da raiz e o valor que vai ser inserido
NoArv *inserir_1(noArv *raiz, int num)
{
    if (raiz == NULL)
    {
        noArv *aux = malloc(sizeof(NoArv));
        aux->valor = num;
        aux->esquerda = NULL;
        aux->direita = NULL;
        return aux;
    }
    else
    {
        if (num < raiz->valor)
        {
            raiz->esquerda = inserir_1(raiz->esquerda, num);
        }
        else
        {
            raiz->direita = inserir_1(raiz->direita, num);
        }
        return raiz;
    }
}

int main()
{
    NoArv *raiz = NULL;

    raiz = inserir_1(raiz, 50);

    return 0;
}
