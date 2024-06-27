#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*link;
}*start;
void print(){
    if(start==NULL){
        printf("NULL\n");
        return;
    }
    while (start!=NULL)
    {
        printf("%d ",start->data);
        start=start->link;
    }
    
}
struct node*getnode(int item){
struct node*new_node=(struct node*)malloc(sizeof(struct node));

new_node->data=item;
new_node->link=NULL;
}

void insert(int item){

struct node*ptr=getnode(item);
ptr->link=start;
start=ptr;
}
int main(){
insert(45);
insert(78);
insert(100);
print();
return 0;
}