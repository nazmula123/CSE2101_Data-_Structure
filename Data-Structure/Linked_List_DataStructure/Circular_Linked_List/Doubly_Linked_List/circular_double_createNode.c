#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *pre;
    int data;
    struct node *next;
} *head = NULL;

struct node* createNode(int item) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = item;
    newNode->pre = NULL;
    newNode->next = NULL;
    return newNode;
}
int main() {
   createNode(78);
   createNode(89);
    return 0;
}
