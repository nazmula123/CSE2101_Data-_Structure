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
void dellast(){

struct node*ptr=head->next;
while (ptr->next!=head)
{
    ptr=ptr->next;
}
struct node*lastnode=head;
ptr->next=head->next;
head=ptr;
free(lastnode);

}
int main(){
insert(58);
insert(12);
insert(17);
insert(28);
traverse();
printf("\nAfter deletion at first node : \n");
dellast();
traverse();
    return 0;
}