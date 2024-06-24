#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};

struct node*create_newNode(int data){
struct node*new_node=NULL;
new_node=(struct node*)malloc(sizeof(struct node));
new_node->data=data;
new_node->next=NULL;
return new_node;
}

void traverse(struct node*head){
struct node*ptr=head;
if(ptr==NULL){
    printf("Linked List is Emty\n");
}
else{
while (ptr!=NULL)
{
 printf("%d->",ptr->data);
 ptr=ptr->next;
}
printf("NULL");
}
}
int main(){
struct node*A=create_newNode(89);
struct node*B=create_newNode(45);
struct node*C=create_newNode(98);
struct node*D=create_newNode(41);

A->next=B;
B->next=C;
C->next=D;

traverse(A);
    return 0;
}

