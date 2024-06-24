#include <stdio.h>

void deleteAtPosition(int arr[], int *size, int position) {
   
    if (position < 0 || position >= *size) {
        printf("Invalid position!\n");
        return;
    }

    for (int i = position; i < *size; i++) {
        arr[i] = arr[i + 1];
    }

    (*size)--;
}

int main() {

    int arr[] = {1, 2, 3, 4, 5,45,89,58,47,89,52,12}; 
    int size = sizeof(arr)/sizeof(arr[0]);

    int delete_position = 4; 

    deleteAtPosition(arr, &size, delete_position);

    printf("Array after deletion:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
