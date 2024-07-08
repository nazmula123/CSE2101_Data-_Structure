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
void delete_first_node(){
struct node*ptr=head;
if(head==NULL){
    printf("head is empty\n");
}
else{
    head=head->link;
    free(ptr);
    head->pre=NULL;
}

}

int main() {
   insert(58);
   insert(21);
   insert(12);
   insert(47);
  delete_first_node();
    traverse();
    return 0;
}
