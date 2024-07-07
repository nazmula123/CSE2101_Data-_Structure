#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *pre;
    int data;
    struct node *link;
} *head = NULL;

void traverse() {
    struct node *current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->link;
    }
    printf("\n");
}

struct node* getNode(int item) {
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->pre = NULL;
    newNode->data = item;
    newNode->link = NULL;
    return newNode;
}

void insert(int item) {
    struct node *newNode = getNode(item);
    if (head == NULL) {
        head = newNode;
    } else {
        head->pre = newNode;
        newNode->link = head;
        head = newNode;
    }
}

void insert_end(int item) {
    struct node *newNode = getNode(item);
    if (head == NULL) {
        head = newNode;
    } else {
        struct node *ptr = head;
        while (ptr->link != NULL) {
            ptr = ptr->link;
        }
        ptr->link = newNode;
        newNode->pre = ptr;
    }
}

int main() {
    insert(58);
    insert_end(89);
    insert_end(47);
    traverse();
    return 0;
}
