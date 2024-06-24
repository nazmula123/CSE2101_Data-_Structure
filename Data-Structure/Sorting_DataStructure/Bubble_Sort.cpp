#include<bits/stdc++.h>
using namespace std;
void Bubble(vector<int>v,int size){
int temp;
bool x;
for(int i=0;i<size-1;i++){
x=false;
    for(int j=0;j<size-i-1;j++){
        if(v[j]>v[j+1]){
            swap(v[j],v[j+1]);
           x=true;
        }
    }
    if(x==false){
        break;
    }
}
for(int i=0;i<size;i++)
{
    cout<<v[i]<<" ";
}
}
int main(){
int a,value;
cin>>a;
vector<int>v;
for(int i=0;i<a;i++)
{
    cin>>value;
    v.push_back(value);
}
Bubble(v,v.size());
return 0;
}
