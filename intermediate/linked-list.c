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

void append(int data, Node **head) {
    Node *new_node = create_node(data);

    Node *current = *head;

    if (*head == NULL) {
        *head = new_node;
        return;
    }

    while (current->next != NULL) {
        current = current->next;
    }
    current->next = new_node;
    new_node->prev = current;
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

void free_all(Node *head) {
    Node *current = head;
    while (current != NULL) {
        Node *next = current->next;
        free(current);
        current = next;
    }
}

int main() {

    // theoretically this is the starting of the linked list
    Node *head = NULL;

    preappend(590, &head);
    preappend(20, &head);
    preappend(40, &head);

    append(59, &head);
    append(69, &head);

    Node *current = head;

    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");

    free_all(head);
    return 0;
}
