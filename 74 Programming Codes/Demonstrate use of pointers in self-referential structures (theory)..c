#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next; // Pointer to the next node
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1); 
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int main() {
    // Create a linked list (example)
    struct Node* head = NULL; // Initially, the list is empty

    // Create nodes and link them
    head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);

    // Traverse and print the linked list
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");

    // Free the allocated memory (important!)
    current = head;
    while (current != NULL) {
        struct Node* temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}
