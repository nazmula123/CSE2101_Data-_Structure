#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*link;
};
struct node*front;
struct node*rear;
void enqueue(int value){

struct node*ptr=(struct node*)malloc(sizeof(struct node));
if(ptr==NULL){
    printf("Queue is Overflow\n");
    return;
}
else{
    ptr->data=value;
if(front==NULL){
    front=ptr;
    rear=ptr;
    front->link=NULL;
    rear->link=NULL;
}
else{
    rear->link=ptr;
    rear=ptr;
    rear->link=NULL;
}
}
}
void display(){

    struct node*ptr;
    ptr=front;
    if(front==NULL){
        printf("Queue is Empty\n");
    }
    else{
        while (ptr!=NULL)
        {
           printf("%d ",ptr->data);
           ptr=ptr->link;
        }
        
    }
}
int main(){

enqueue(89);
enqueue(12);
enqueue(23);
enqueue(895);
display();
    return 0;
}