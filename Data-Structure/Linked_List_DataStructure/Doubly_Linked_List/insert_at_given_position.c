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
void insert_at_given_position(int pos,int item){
struct node*ptr=head;
struct node*newNode=getNode(item);
struct node*temp=NULL;
int c=0;
while (ptr!=NULL)
{
    c++;
    if(c==pos){
        temp=ptr->link;
        ptr->link=newNode;
        newNode->link=temp;
        newNode->pre=ptr;
    }
    ptr=ptr->link;
}


}

int main() {
   insert(58);
   insert(21);
   insert(12);
   insert(47);
 insert_at_given_position(2,89);
    traverse();
    return 0;
}
