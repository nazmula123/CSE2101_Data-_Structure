#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*link;
}*start;
void Push(int value){
struct node*ptr=(struct node*)malloc(sizeof(struct node));
if(ptr==NULL){
    printf("Not Push Element\n");
}
else{
   
    if(start==NULL){
        ptr->data=value;
        ptr->link=NULL;
        start=ptr;
    }
    else{
        ptr->data=value;
        ptr->link=start;
        start=ptr;
    }
}    
}
void PoP(){
struct node*ptr;
int value;
if(start==NULL){
    printf("Undarflow\n");
}
else{
     value = start->data;  
        ptr = start;  
        start = start->link;  
        free(ptr);  
}
}
void display(){

if(start==NULL){
    printf("Value is not Push\n");
}
else{
    while (start!=NULL)
    {
        printf("%d \n",start->data);
        start=start->link;
    }
}
}
int main(){
    Push(10);
    PoP();
    Push(45);
    PoP();
    Push(78);
    Push(58);
    
    display();
    return 0;
}