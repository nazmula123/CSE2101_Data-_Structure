#include <iostream>
using namespace std;
int getMax(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}
void countSort(int arr[], int n, int exp)
{
    int output[n];
    int i, count[10] = { 0 };
    for (i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;

    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];
 
    for (i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }
    for (i = 0; i < n; i++)
        arr[i] = output[i];
}

void radixsort(int arr[], int n)
{

    int m = getMax(arr, n);

    for (int i = 1; m / i > 0; i *= 10)
        countSort(arr, n, i);
}
 
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
int main()
{
   int size;
   cout<<"Size of Array: ";
   cin>>size;
   int arr[size];
   cout<<"Input Array: "<<endl;

   for(int i=0;i<size;i++){
    cin>>arr[i];
   }
    radixsort(arr, size);
    print(arr, size);
    return 0;
}