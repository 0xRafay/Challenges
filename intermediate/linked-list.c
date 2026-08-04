#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
} Node;

Node *create_node(int data) {
    Node *allocatedNode = malloc(sizeof(Node));

    allocatedNode->data = data;
    allocatedNode->next = NULL;
    allocatedNode->prev = NULL;

    return allocatedNode;
}
// why Node** instead of Node*?
// a double pointers lets us modify the original pointer
// Node* head, would only be a copy of head,
// Node** head, means the original head
void preappend(int data, Node **head) {

    Node *new_node = create_node(data);

    // we are trying to move the initial head one ahead, and add the new node as
    // the new head
    new_node->next = *head;
    *head = new_node;
}

int main() {

    // theoretically this is the starting of the linked list
    Node *head = NULL;

    preappend(590, &head);
    preappend(20, &head);
    preappend(40, &head);

    Node *current = head;

    printf("Head: %d\n", head->data);

    free(head);
    return 0;
}
