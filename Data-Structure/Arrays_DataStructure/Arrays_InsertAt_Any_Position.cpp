#include<iostream>
using namespace std;
void insert(int arr[],int a,int position,int value){
    if(position>a){
        cout<<"not found"<<endl;
    }
for(int i=a;i>=position;i--){
    arr[i]=arr[i-1];
}
arr[position-1]=value;
}

int main(){

cout<<"Enter array size:"<<endl;
int a;
cin>>a;
int arr[a+1];

cout<<"Enter array input:"<<endl;
for(int i=0;i<a;i++){
cin>>arr[i];
}
int position,value;
cout<<"Input position and insert value"<<endl;
cin>>position>>value;

insert(arr,a,position,value);
for(int i=0;i<=a;i++){
    cout<<arr[i]<<" ";
}
return 0;
}
