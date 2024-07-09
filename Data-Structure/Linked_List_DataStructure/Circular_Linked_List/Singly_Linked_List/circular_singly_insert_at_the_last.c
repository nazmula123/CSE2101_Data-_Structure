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
void insert_at_last(int item){
struct node*newNode=getNode(item);

newNode->next=head->next;
head->next=newNode;
head=head->next;

}
int main(){
insert(58);
insert_at_last(89);
insert_at_last(15);
traverse();
    return 0;
}