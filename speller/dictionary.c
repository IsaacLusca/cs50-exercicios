// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include "dictionary.h"
#include <string.h>
#include <stdlib.h>

#define NUM_BUCKETS 26
// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
} node;

// TODO: Choose number of buckets in hash table
const unsigned int N = 10000;

// Hash table
node *table[N];

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    // TODO
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    // TODO: Improve this hash function
    // Receberá uma entrada
    int sum_hash = 0;

    sum_hash += toupper(word[0]) - 'A';
    sum_hash += (toupper(word[0]) - 'A') * 26 + (toupper(word[1]) - 'A');
    for (int i = 0, n = strlen(word); i < n; i++)
    {
        sum_hash += (toupper(word[i]) * (i + 1)) * 31;
    }
    return sum_hash % N;
}

// void contar_palavras_no_bucket(const char *palavras[], int total_palavras)
// {
//     int contadores[NUM_BUCKETS] = {0}; // Array de contadores inicializado com zeros

//     // Percorrer todas as palavras
//     for (int i = 0; i < total_palavras; i++)
//     {
//         const char *palavra = palavras[i];

//         // Calcula o hash da palavra
//         unsigned int bucket = hash(palavra);

//         // Verifica se o bucket está dentro dos limites (0 a 25)
//         if (bucket < NUM_BUCKETS)
//         {
//             // Incrementa o contador no bucket correspondente
//             contadores[bucket]++;
//         }
//     }

//     // Exibe quantas palavras caíram em cada bucket
//     for (int i = 0; i < NUM_BUCKETS; i++)
//     {
//         printf("Bucket %c: %d palavras\n", 'A' + i, contadores[i]);
//     }
// }

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    // Objetivos: Ler o dicionario, ler cada string, criar um nó para cada palavra
    // fazer o hash dessa palavra, e colocar o nó de acordo com a função hash.

    // TODO

    FILE *arquivo = fopen(dictionary, "r");
    if (arquivo == NULL)
    {
        printf("Não foi possível abrir o arquivo %s\n", dictionary);
        return false;
    }

    // ler cada string
    //não se pode usar strlen para ler arquivos. ANOTADO

    char word[LENGTH + 1];
    while (fscanf(arquivo, "%s", word) != EOF)
    {
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            fclose(arquivo);
            return false;
        }

        // e preciso armazenar em cada hash - node *table[N];
        strcpy(n->word, word);
        int contagem_hash = hash(word);
        n->next = table[contagem_hash];
        table[contagem_hash] = n;

        // printf("Palavra: %s, Hash: %i\n", word, contagem_hash);
    }

    // hash = toupper(word[0]) - 'A';
    fclose(arquivo);
    return true;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    return 0;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    // TODO
    return false;
}

// load: ler as palavras de um dicionário específico, talvez com hash.
// hash: pegar a letra e voltar seu valor numérico correspondente
// size: que reporta a quantidade de palavras que existem no dicionário
// check: checar se uma palavra está ou não no dicionário
// unload: desalocar memórias que possam estar.

