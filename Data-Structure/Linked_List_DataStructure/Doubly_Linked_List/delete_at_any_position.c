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

void delete_at_position(int pos) {
    struct node*ptr=head;
    struct node*temp=NULL;
    int p=0;
    while (ptr->link!=NULL)
    {
        p++;
        if(p==pos){
              temp=ptr->pre;
              temp->link=ptr->link;
              ptr->link->pre=temp; 
              free(ptr);
              

    }
       ptr=ptr->link;
    }
    
}

int main() {
    insert(58);
    insert(21);
    insert(12);
    insert(47);
     traverse();
    delete_at_position(2); 
    traverse();

    return 0;
}
