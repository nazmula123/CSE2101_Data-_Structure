#include<stdio.h>
#include<stdlib.h>
struct node{
struct node*pre;
int data;
struct node*next;
};
struct node* createNode(int item){
struct node*newNode=(struct node*)malloc(sizeof(struct node));
newNode->pre=NULL;
newNode->data=item;
newNode->next=NULL;
return newNode;
}
int main(){
struct node*newNode=createNode(89);
    return 0;
}