#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
} Node;

Node* creat_node(int data){
    Node* allocatedNode = malloc(sizeof(Node));

    allocatedNode->data = data;
    allocatedNode->next = NULL;
    allocatedNode->prev = NULL;

    return allocatedNode;
}

int main() {

    Node* head = creat_node(10);

    printf("Head: %d\n", head->data);
    return 0;
}
