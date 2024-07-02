#include<bits/stdc++.h>
using namespace std;
void selection_Sort(vector<int>v1,int size){
int temp,min;
for(int i=0;i<size-1;i++)
{   
   min=i;   
   for(int j=i+1;j<size;j++){
    if(v1[j]<v1[min]){
        min=j;
    }
   }
    if(min!=i){
        temp=v1[i];
        v1[i]=v1[min];
        v1[min]=temp;
    }
   
}
for(int i=0;i<size;i++){
    cout<<v1[i]<<" ";
}
}
int main(){

vector<int>v;
int a,value;
cin>>a;
for(int i=0;i<a;i++){
  cin>>value;
  v.push_back(value);
}
selection_Sort(v,v.size());
return 0;
}