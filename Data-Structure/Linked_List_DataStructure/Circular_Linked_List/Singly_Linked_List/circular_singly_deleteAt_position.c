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
void dellast(int position){
    struct node*ptr=head->next;
while (position>2)
{
        position--;
        ptr=ptr->next;  
}
struct node*temp2=ptr->next;
ptr->next=temp2->next;
free(temp2);
}
int main(){
insert(58);
insert(12);
insert(17);
insert(2);
insert(86);
insert(100);
traverse();
printf("\nAfter deletion at position node : \n");
dellast(3);
traverse();
    return 0;
}