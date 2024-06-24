#include<iostream>
using namespace std;
void traversal(int arr[],int size){

for(int i=0;i<size;i++)
{
    cout<<arr[i]<<" ";
}
}
int main(){
int arr[]={56,78 ,59,58, 45 ,25,89,25};
int n=sizeof(arr)/sizeof(arr[0]);
traversal(arr,n);
    return 0;
}
