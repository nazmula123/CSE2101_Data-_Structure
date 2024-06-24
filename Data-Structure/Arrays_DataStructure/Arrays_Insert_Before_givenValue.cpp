#include<iostream>
using namespace std;
void print(int arr[],int size){
cout<<"Print Array.."<<endl;
for(int i=0;i<=size;i++)
{
    cout<<arr[i]<<" ";
}
}
int position(int arr[],int size,int value){

    for(int i=0;i<size;i++){
        if(arr[i]==value){
            return i+1;
        }
    }
    return -1;
}
void before(int arr[],int size,int position,int value){

for(int i=size;i>position;i--){
    arr[i]=arr[i-1];
}
arr[position]=value;
}
int main(){
cout<<"Array size input..."<<endl;
int a;
cin>>a;
int arr[100];
cout<<"input array"<<endl;
for(int i=0;i<a;i++)
{
    cin>>arr[i];
}
cout<<"input SearchValue and InsertValue"<<endl;

int SearchValue,insertValue;
cin>>SearchValue>>insertValue;

int pos=position(arr,a,SearchValue);
if(pos==-1){
    cout<<"Value not present array"<<endl;
}
else{ 
      before(arr,a,pos-1,insertValue);
      print(arr,a);
}
    return 0;
}
