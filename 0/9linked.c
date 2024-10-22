#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura do nó da lista encadeada
typedef struct ListNode {
    int val;
    struct ListNode* next;
} ListNode;

// Função para mesclar duas listas encadeadas
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode* dummy = malloc(sizeof(ListNode));
    dummy->next = NULL;
    ListNode* merge = dummy;  // Ponteiro para construir a lista mesclada

    while (list1 != NULL || list2 != NULL) {
        if (list1 != NULL && (list2 == NULL || list1->val <= list2->val)) {
            merge->next = list1;
            list1 = list1->next;
        } else {
            merge->next = list2;
            list2 = list2->next;
        }
        merge = merge->next;  // Avança o ponteiro merge
    }

    ListNode* mergedHead = dummy->next;
    free(dummy);  // Libera a memória alocada para dummy
    return mergedHead;  // Retorna a cabeça da lista mesclada
}

// Função para criar um novo nó da lista
ListNode* createNode(int value) {
    ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
    newNode->val = value;
    newNode->next = NULL;
    return newNode;
}

// Função para adicionar um nó no final da lista
void appendNode(ListNode** head, int value) {
    ListNode* newNode = createNode(value);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    ListNode* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Função para imprimir a lista encadeada
void printList(ListNode* head) {
    ListNode* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->val);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Função principal
int main() {
    // Criação da primeira lista encadeada: 1 -> 2 -> 4
    ListNode* list1 = NULL;
    appendNode(&list1, 1);
    appendNode(&list1, 2);
    appendNode(&list1, 4);

    // Criação da segunda lista encadeada: 1 -> 3 -> 4
    ListNode* list2 = NULL;
    appendNode(&list2, 1);
    appendNode(&list2, 3);
    appendNode(&list2, 4);

    // Mesclando as listas
    ListNode* mergedList = mergeTwoLists(list1, list2);

    // Imprimindo a lista mesclada
    printf("Lista mesclada: ");
    printList(mergedList);

    // Liberando a memória das listas (opcional, mas recomendado)
    // Aqui você pode implementar uma função para liberar a memória dos nós, se desejar

    return 0;
}
