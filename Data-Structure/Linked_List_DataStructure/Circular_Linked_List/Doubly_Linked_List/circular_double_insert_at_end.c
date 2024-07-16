#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *pre;
    int data;
    struct node *next;
} *head = NULL;

struct node* getNode(int item) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = item;
    newNode->pre = NULL;
    newNode->next = NULL;
    return newNode;
}

void traverse() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    struct node *ptr = head;
    do {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
    printf("\n");
}

void insertAtBeginning(int item) {
    struct node *newNode = getNode(item);
    if (head == NULL) {
        head = newNode;
        head->next = head;
        head->pre = head;
    } else {
        struct node *last = head->pre;
        newNode->next = head;
        newNode->pre = last;
        last->next = newNode;
        head->pre = newNode;
        head = newNode;
    }
}

void insertAtEnd(int item) {
    struct node *newNode = getNode(item);
    if (head == NULL) {
        head = newNode;
        head->next = head;
        head->pre = head;
    } else {
        struct node *last = head->pre;
        last->next = newNode;
        newNode->pre = last;
        newNode->next = head;
        head->pre = newNode;
    }
}

int main() {
    insertAtBeginning(58);
    insertAtBeginning(89);
    insertAtBeginning(100);
    traverse();
    insertAtEnd(23);
    insertAtEnd(47);
    insertAtEnd(20);
    traverse();
    return 0;
}
