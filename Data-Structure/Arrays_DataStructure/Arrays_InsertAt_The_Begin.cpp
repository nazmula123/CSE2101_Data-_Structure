#include<iostream>
using namespace std;
void insert(int arr[],int size,int value){

for(int i=size;i>0;i--){
    arr[i]=arr[i-1];
}
arr[0]=value;
cout<<"OutPut Array ..."<<endl;
for(int i=0;i<size;i++){
cout<<arr[i]<<" ";
}
}

int main(){
    int a;
    cin>>a;
    int arr[a+1];
    cout<<" Array input......."<<endl;
for(int i=0;i<a;i++){
    cin>>arr[i];
}
cout<<"insert Value"<<endl;
int value;
cin>>value;
insert(arr,a+1,value);
    return 0;
}
