#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_NODES 100

// Estrutura de nó na lista de adjacências
typedef struct Node {
    int vertex;
    struct Node* next;
} Node;

// Estrutura do grafo
typedef struct Graph {
    int numVertices;
    Node* adjLists[MAX_NODES];
    bool visited[MAX_NODES];
} Graph;

// Função para criar um nó
Node* createNode(int v) {
    Node* newNode = malloc(sizeof(Node));
    newNode->vertex = v;
    newNode->next = NULL;
    return newNode;
}

// Função para criar um grafo
Graph* createGraph(int vertices) {
    Graph* graph = malloc(sizeof(Graph));
    graph->numVertices = vertices;

    for (int i = 0; i < vertices; i++) {
        graph->adjLists[i] = NULL;
        graph->visited[i] = false;
    }
    return graph;
}

// Função para adicionar aresta não-direcionada
void addEdge(Graph* graph, int src, int dest) {
    Node* newNode = createNode(dest);
    newNode->next = graph->adjLists[src];
    graph->adjLists[src] = newNode;

    newNode = createNode(src);
    newNode->next = graph->adjLists[dest];
    graph->adjLists[dest] = newNode;
}

// BFS sem parâmetros adicionais
void bfs(Graph* graph) {
    int startVertex = 0; // Começa do primeiro nó por padrão
    bool queue[MAX_NODES];
    int front = 0, rear = 0;

    queue[rear++] = startVertex;
    graph->visited[startVertex] = true;

    while (front < rear) {
        int currentVertex = queue[front++];
        printf("Visit %d\n", currentVertex);

        Node* temp = graph->adjLists[currentVertex];
        while (temp) {
            int adjVertex = temp->vertex;

            if (!graph->visited[adjVertex]) {
                queue[rear++] = adjVertex;
                graph->visited[adjVertex] = true;
            }
            temp = temp->next;
        }
    }
}

// BFS com grafo e nó inicial
void bfsWithStart(Graph* graph, int startVertex) {
    bool queue[MAX_NODES];
    int front = 0, rear = 0;

    queue[rear++] = startVertex;
    graph->visited[startVertex] = true;

    while (front < rear) {
        int currentVertex = queue[front++];
        printf("Visit %d\n", currentVertex);

        Node* temp = graph->adjLists[currentVertex];
        while (temp) {
            int adjVertex = temp->vertex;

            if (!graph->visited[adjVertex]) {
                queue[rear++] = adjVertex;
                graph->visited[adjVertex] = true;
            }
            temp = temp->next;
        }
    }
}

// BFS com grafo, nó inicial e nó final
bool bfsWithStartAndEnd(Graph* graph, int startVertex, int endVertex) {
    bool queue[MAX_NODES];
    int front = 0, rear = 0;

    queue[rear++] = startVertex;
    graph->visited[startVertex] = true;

    while (front < rear) {
        int currentVertex = queue[front++];

        // Condição para verificar o nó final
        if (currentVertex == endVertex) {
            printf("Reached %d\n", endVertex);
            return true;
        }

        printf("Visit %d\n", currentVertex);

        Node* temp = graph->adjLists[currentVertex];
        while (temp) {
            int adjVertex = temp->vertex;

            if (!graph->visited[adjVertex]) {
                queue[rear++] = adjVertex;
                graph->visited[adjVertex] = true;
            }
            temp = temp->next;
        }
    }
    return false;
}

int main() {
    Graph* graph = createGraph(6);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 2, 4);
    addEdge(graph, 3, 5);

    printf("BFS from first node:\n");
    bfs(graph);

    // Reset visited nodes for a fresh BFS
    for (int i = 0; i < graph->numVertices; i++) {
        graph->visited[i] = false;
    }

    printf("\nBFS from specified start node (2):\n");
    bfsWithStart(graph, 2);

    // Reset visited nodes for a fresh BFS
    for (int i = 0; i < graph->numVertices; i++) {
        graph->visited[i] = false;
    }

    printf("\nBFS from node 0 to node 5:\n");
    bool found = bfsWithStartAndEnd(graph, 0, 5);
    if (!found) {
        printf("Node 5 not reachable from node 0\n");
    }

    return 0;
}
