#include<iostream>
using namespace std;
int front=-1,rear=-1;
int queue[10];
 int n=sizeof(queue)/sizeof(queue[0]);
void enqueue(int value){
   
if(rear==n-1){
    cout<<"OverFlow"<<endl;
    return;
}
else if(front==-1 && rear==-1){
front=0;
rear=0;
queue[rear]=value;
}
else{
    rear++;
    queue[rear]=value;
}
}
void dequeue(){
if(front==rear){
    front=-1;
    rear=-1;
}
else{
    front=front+1;
}

}
void display(){
for(int i=front;i<=rear;i++){
    cout<<queue[i]<<endl;
} 
}

int main(){
    cout<<"Before Dequeu"<<endl;
enqueue(45);
enqueue(89);
enqueue(8);
enqueue(9);
enqueue(23);
enqueue(84);
enqueue(12);
display();
cout<<"After Dequeu"<<endl;
dequeue();
dequeue();
display();
    return 0;
}