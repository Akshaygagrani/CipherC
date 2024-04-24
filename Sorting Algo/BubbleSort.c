// Sorting Algorithms

// - Bubble Sort ~ DONE
// - Selection Sort 
// - Insertion Sort ~ DONE
// - Merge Sort 
// - Quick Sort
// - Counting Sort
// - Radix Sort
// - Bucket Sort
// - Heap Sort 
// - Shell Sort

#include <stdio.h>

void bubbleSort(int arr[], int n){
    printf("\n Bubble Sorting Starting \n");
    
    // Loop to access each arr element
    for(int step=0; step<n-1; step++){
        // Loop to compare the arr elements
        for(int i=0; i<n-step-1; i++){
            // Compare two adjacent values here
            if(arr[i] < arr[i+1]){
                // Swapping since wrong order
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
            
        }
    }
}


void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        printf(" %d ", arr[i]);
    }
    
    printf("\n");
}

int main()
{
    int arr[] = {-2, 45, 0, 11, -9};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    printf("Initially array is : \n");
    printArr(arr, n);
    
    bubbleSort(arr, n);
    
    printf("\nArray after sorting is : \n");
    printArr(arr, n);

    return 0;
}
