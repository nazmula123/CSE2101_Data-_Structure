#include <iostream>  
using namespace std;  
int Search(int a[], int n, int value) {  
 
  for (int i = 0; i < n; i++)  
    {  
        if (a[i] == value)  
        return i+1;  
    }  
  return -1;  
}  
int main() {  
  int a[] = {69, 39, 29, 10, 56, 40, 24, 13, 51}; 
  int value = 24;
  int n = sizeof(a) / sizeof(a[0]);  
  int position = Search(a, n, value); 
  cout<<"The elements of the array are : ";  
  for (int i = 0; i < n; i++)  
  cout<<a[i]<<" ";    
  cout<<"\nElement to be searched is :  "<<value;    
  if (position == -1)  
  cout<<"\nElement is not present in the array";  
  else  
  cout<<"\nElement is present at "<<position<<" position of array";  
  return 0;  
}  
