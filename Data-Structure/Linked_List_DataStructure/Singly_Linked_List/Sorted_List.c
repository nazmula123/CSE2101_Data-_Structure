#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*link;
}*start;
void traversal(){
struct node*ptr=start;
if(ptr==NULL){
    printf("Data not Inserted\n");
}
else{
while (ptr!=NULL)
{
        printf("%d ",ptr->data);
        ptr=ptr->link;
}}
}
struct node*getNode(int item){
struct node*newNode=(struct node*)malloc(sizeof(struct node));
newNode->data=item;
newNode->link=NULL;
return newNode;
}
void insert_sorted_List(int data){
struct node*temp;
struct node*newNode=getNode(data);
int item=data;
if(start==NULL||item<start->data)
{
    newNode->link=start;
    start=newNode;
}
else{
    temp=start;
    while (temp!=NULL && temp->link->data<item){
        temp=temp->link;
        newNode->link=temp->link;
        temp->link=newNode;
    }
}
}
int main(){

insert_sorted_List(45);
insert_sorted_List(36);
insert_sorted_List(18);
traversal();
    return 0;
}