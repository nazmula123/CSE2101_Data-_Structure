#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *pre;
    int data;
    struct node *link;
} *head = NULL;

void traverse() {
    struct node *current = head;
    if (current == NULL) {
        printf("List is empty\n");
        return;
    }
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

void node_count()
{
  struct node*ptr=head;
  int c=0;
  while (ptr!=NULL)
  {
    c++;
    ptr=ptr->link;
  }
  printf(" current node: %d \n",c);
}
int main() {
    insert(58);
    insert(21);
    insert(12);
    insert(47);
    traverse();
   node_count();
    return 0;
}
