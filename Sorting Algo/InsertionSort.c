// INSERTION SORT
#include <stdio.h>

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        printf(" %d ", arr[i]);
    }
    printf("\n");
}

void insertionSort(int arr[], int size){
    for(int i=1; i<size; i++){
        int key = arr[i];
        // printf("Key = %d\n", key);
        int j = i-1;
        
        // Compare the key with each element on the left of it, 
        // until element smaller than the key is found
        //  or we reach to the left end of the array
        while(arr[j] > key && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
        printf("partially Sorted array with key = %d : ", key);
        printArray(arr, size);
    }
}

int main()
{
    int arr[] = {9, 5, 1, 4, 3};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Before actual Sorting\n");
    printArray(arr, size);
    insertionSort(arr, size);
    printf("Array after Sorting \n");
    printArray(arr, size);
    
    return 0;
}
