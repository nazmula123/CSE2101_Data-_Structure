#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
int data;
struct Node*next;
};
void print(struct Node*head){

    while (head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}
struct Node*delete(struct Node*head,int value){

struct Node*current=(struct Node*)malloc(sizeof(struct Node));
current->next=head;
struct Node*temp=current;
while (temp->next!=NULL)
{
    if(temp->next->data==value){
        temp->next=temp->next->next;
    }
    temp=temp->next;
}

return current->next;

}
int main(){
struct Node*a=NULL,*b=NULL,*c=NULL,*d=NULL;
a=(struct Node*)malloc(sizeof(struct Node));
b=(struct Node*)malloc(sizeof(struct Node));
c=(struct Node*)malloc(sizeof(struct Node));
d=(struct Node*)malloc(sizeof(struct Node));

a->data=89;
b->data=25;
c->data=36;
d->data=84;

a->next=b;
b->next=c;
c->next=d;
d->next=NULL;
print(a);
struct Node*newDelete;
newDelete=delete(a,36);
print(newDelete);
return 0;
}
