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
int search(struct node*head,int item){
struct node*current=head;
int c=1;
while (current!=NULL)
{
    if(current->data==item){
        return c;
    }
    c++;
    current=current->next;
}
return -1;
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
printf("\n");
int x=search(A,98);
if(x==-1){
    printf("Value not found\n");
}
else{
    printf("Value found at position : %d",x);
}
    return 0;
}

