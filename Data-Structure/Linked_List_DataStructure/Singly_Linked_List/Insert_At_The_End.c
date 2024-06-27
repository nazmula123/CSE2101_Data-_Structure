#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
} *start = NULL; 

void print() {
    if (start == NULL) {
        printf("NULL\n");
        return;
    }
    struct node *temp = start;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->link;
    }
    printf("\n"); 
}

struct node* getnode(int item) {
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL) {
        printf("Memory allocation failed\n");
        exit(1); 
    }
    new_node->data = item;
    new_node->link = NULL;
    return new_node; 
}

void insert(int item) {
    struct node *ptr = getnode(item);
    ptr->link = start;
    start = ptr;
}

void insert_end_position(int item) {
    struct node *ptr = getnode(item);

    struct node *current = start;
    while (current->link != NULL) {
        current = current->link;
    }
    current->link = ptr;
}

int main() {
    insert(45);
    printf("Before insert:\n");
    print();
    
    printf("After insert:\n");
    insert_end_position(89);
    print();
    
    return 0;
}
