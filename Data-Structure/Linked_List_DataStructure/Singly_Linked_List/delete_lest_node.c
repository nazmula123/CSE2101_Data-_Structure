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
void insert_At_Fast(int item){
struct node*ptr=getNode(item);
ptr->link=start;
start=ptr;
}
void delete_at_last(){
struct node*ptr=start;
struct node*ptr2=start;
if(ptr==NULL){
    printf("Node is Empty\n");
}
else{
    while (ptr->link!=NULL)
    {
        ptr2=ptr;
        ptr=ptr->link;
    }
    ptr2->link=NULL;
    free(ptr);
}
}
int main(){
insert_At_Fast(48);
insert_At_Fast(49);
insert_At_Fast(45);
insert_At_Fast(41);
delete_at_last();
traversal();
    return 0;
}