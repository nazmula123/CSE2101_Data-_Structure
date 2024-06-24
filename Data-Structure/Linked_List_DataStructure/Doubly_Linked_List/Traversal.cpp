#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node{
struct Node*prev;
int data;
struct Node*next;

};
void print(struct Node*head){
while (head!=NULL)
{
    cout<<head->data<<"->";
    
   head= head->next;
}
cout<<"NULL"<<endl;
}
int main(){
struct Node*head=NULL,*a=NULL,*b=NULL,*c=NULL;
head=(struct Node*)malloc(sizeof(struct Node));
a=(struct Node*)malloc(sizeof(struct Node));
b=(struct Node*)malloc(sizeof(struct Node));
c=(struct Node*)malloc(sizeof(struct Node));

head->prev=NULL;
head->data=50;
head->next=a;


a->prev=head;
a->data=89;
a->next=b;

b->prev=a;
b->data=56;
b->next=c;

c->prev=b;
c->data=23;
c->next=NULL;
print(head);
return 0;
}