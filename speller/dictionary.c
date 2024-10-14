// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include "dictionary.h"
#include <string.h>
// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
} node;

// TODO: Choose number of buckets in hash table
const unsigned int N = 26;

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
    return toupper(word[0]) - 'A';
}

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
    // char word[LENGHT + 1];
    
    while (fscanf(arquivo, "%s", word) != EOF)
    {
        node *n = malloc(sizeof(node));

        n->word =
    }

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

