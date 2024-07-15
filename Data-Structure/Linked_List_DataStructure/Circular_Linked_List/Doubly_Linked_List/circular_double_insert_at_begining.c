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
    newNode->pre =newNode;
    newNode->pre=newNode;
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
        struct node *first = head->pre;
        newNode->next = head;
        newNode->pre = first;
        first->next = newNode;
        head->pre = newNode;
        head = newNode; 
    }
}

int main() {
    insertAtBeginning(58);
    insertAtBeginning(89);
    insertAtBeginning(100);
    traverse(); 
    return 0;
}
