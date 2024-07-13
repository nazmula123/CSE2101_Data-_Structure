#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
}*head=NULL;
struct node* getNode(int item){
struct node*newNode=(struct node*)malloc(sizeof(struct node));
newNode->data=item;
newNode->next=newNode;
return newNode;
}
void traverse(){
struct node*ptr= head->next;
do
{
    printf  ("%d ",ptr->data);
    ptr=ptr->next;
} while (ptr!=head->next);


}
void insert(int item){
struct node*newNode=getNode(item);
 if (head == NULL) {
        head = newNode;
        head->next = head;
    }
    else 
    {
       struct node*ptr=head;
       newNode->next=ptr->next;
       ptr->next=newNode;
    }
}
void insert_at_position(int position ,int data){
struct node*ptr=head;
int counter=0;
while (position>1)
{
    position--;
    ptr=ptr->next;
}
struct node*newNode=getNode(data);
newNode->next=ptr->next;
ptr->next=newNode;
}
int main(){
insert(58);
insert(12);
insert(17);
insert(28);
traverse();
printf("\nAfter insertion at position : \n");
insert_at_position(2,100);
insert_at_position(3,200);
traverse();
    return 0;
}