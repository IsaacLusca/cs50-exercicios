// misturar um pouco de array
// buscar o melhor de listas e array para implementar uma solução

// busca de árvore binária:
diferente da lista encadeada, temos a estrutura:

typedef struct no
{
    int numero;
    struct no *left;
    struct no *right;
} no;

- usando dicionario que é uma estrutura de dados que armazena chaves e valores

- A melhor forma para tentar alcançar o O(1) são com hashs

- hash é uma função de intervalo finito e valores específicos
Consiste em pegar um valor de entrada e separar em segmentos para resolver os problemas menores

de forma simples, o hash é uma mistura de array e lista vinculada

um exemplo da estrutura hash:

typedef struct no
{
    char *nome;
    int numero;
    struct no *proximo;
}
o no que nos dara o que é preciso para as listas vinculadas:

no *tabela[26];

hash mario nos daria 12 pois é seu valor em ordem alfabetica

implementação simples

#include <ctype.h>
// const para evitar que altere o valor da palavra.
// unsigned serve para evitar valores negativos
unsigned int hash(const char *word)
{
    // retorna o valor númerico de A.
    return toupper(word[0]) - 'A';
}
seria O(n/k = 26), mas de forma prática, 26 mais rápido é bastante coisa
mesmo assim hash é O(n). PORRA.
hash é uma estrutura ótima, consegue se aproximar de algo como O(1);

