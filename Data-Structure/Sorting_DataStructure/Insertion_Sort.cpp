#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>arr, int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
 
        
        while (j >= 0 && ar6r[j] >= key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


int main()
{
   vector<int>v;
   int a;
   cin>>a;
   for(int i=0;i<a;i++){
    int value;
    cin>>value;
    v.push_back(value);
   }
   
   insertionSort(v,v.size());
 
    return 0;
}