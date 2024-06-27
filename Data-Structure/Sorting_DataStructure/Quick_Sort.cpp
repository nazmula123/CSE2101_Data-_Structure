#include<bits/stdc++.h>
using namespace std;
void qiuck_Sort(int arr[],int first,int last);
int partition(int arr[],int low,int high){
int pivot=arr[high];
int i=low;
for(int j=low;j<high;j++){
    if(pivot>=arr[j]){
      swap(arr[i],arr[j]);
      i++;
    }
}
swap(arr[i],arr[high]);
return i;
}
void quick_Sort(int arr[],int first,int last){
if(first<last){
    int n=partition(arr,first,last);
   quick_Sort(arr,first,n-1);
    quick_Sort(arr,n+1,last);
}
}
void print(int arr[],int n){
for(int i=0;i<n;i++)
cout<<arr[i]<<" ";
}
int main(){
int t;
cin>>t;
int arr[t];
for(int i=0;i<t;i++)
{
  cin>>arr[i];
}
int n=sizeof(arr)/sizeof(arr[0]);
quick_Sort(arr,0,n-1);
print(arr,n);
    return 0;
}