#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};

struct node *create_node(int data);
struct node *prepend(int data, struct node *head);
void print_list(struct node *head);
void free_list(struct node *head);

int main(void) {
    struct node *head = prepend(1, NULL);
    head = prepend(2, head);
    head = prepend(3, head);

    // We should have the list 3 -> 2 -> 1 -> X
    // Print list to make sure
    print_list(head);

    // Free list to prevent memory leaks
    free_list(head);
    return 0;
}

// Prepends a node storing the give data value to a list and returns the new
// head
struct node *prepend(int data, struct node *head) {
    struct node *new_head = create_node(data);
    new_head->next = head;
    return new_head;
}

// Creates a node storing the given data value
struct node *create_node(int data) {
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

// Prints a list starting from head
void print_list(struct node *head) {
    struct node *current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("X\n");
}

void free_list(struct node *head) {
    struct node *curr = head;
    while (curr != NULL) {
        struct node *temp = curr;
        curr = curr->next;
        free(temp);
    }
}

