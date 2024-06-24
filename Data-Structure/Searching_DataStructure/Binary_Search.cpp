#include <iostream>  
using namespace std;  
int binary_Search(int a[], int beg, int end, int val)    
{    
    int mid;    
    if(end >= beg)     
    {  
        mid = (beg + end)/2;    
  
        if(a[mid] == val)    
        {                 
            return mid+1;    
        }    
        else if(a[mid] < val)     
        {  
            return binary_Search(a, mid+1, end, val);    
        }    
    else     
        {  
            return binary_Search(a, beg, mid-1, val);    
        }         
    }    
    return -1;     
}   
int main() {  
  int a[] = {15, 23, 25, 37, 40, 42, 49, 78}; 
  int val =25;
  int n = sizeof(a) / sizeof(a[0]); 
  int res = binary_Search(a, 0, n-1, val);
  cout<<"The elements of the array are : ";  
  for (int i = 0; i < n; i++)  
  cout<<a[i]<<" ";  
    
  cout<<"\nElement to be searched is : "<<val;   
  if (res == -1)  
  cout<<"\nElement is not present in the array";  
  else  
  cout<<"\nElement is present at "<<res<<" position of array";  
  return 0;  
}  
