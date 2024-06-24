#include <iostream>
using namespace std;

void insert(int arr[], int size,int value)
{
	arr[size]=value; 
cout<<"output Array ....."<<endl;
	for(int i=0;i<=size;i++){
		cout<<arr[i]<<" ";
	}
}
int main()
{
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
insert(arr,a,value);


	return 0;
}
