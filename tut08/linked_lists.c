#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};

struct node *create_node(int data);
struct node *prepend(int data, struct node *head);

int main(void) {
    struct node *head = prepend(1, NULL);
    head = prepend(2, head);
    head = prepend(3, head);

    struct node *current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("X\n");

    // Note this program has memory leaks.
    return 0;
}

// Prepends node to a list and returns the new head
struct node *prepend(int data, struct node *head) {
    struct node *new_head = create_node(data);
    new_head->next = head;
    return new_head;
}

// Creates a new node with given data value
struct node *create_node(int data) {
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}
