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
void reverse(){
struct node*pre=NULL,*current=start,*next=NULL;
while (current!=NULL)
{
        next = current->link; 
        current->link = pre; 
        pre = current;
        current = next;
    }
    start = pre;
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
int main(){

insert_At_Fast(78);
insert_At_Fast(95);
insert_At_Fast(58);
traversal();
reverse();
printf("\n");
traversal();
    return 0;
}