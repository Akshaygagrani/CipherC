// MERGE  SORT

// mergeSort(arr, p, r)
//     if p>r
//         return 
//     q = (p+r)/2;
//     mergeSort(arr, p, q);
//     mergeSort(arr, q+1, r);
//     merge(arr, p, q, r);
    
// - The merge step of the Merge Sort
//  : It is nothing but a recursive func to combine 2 sorted arrays
//  Algo mainains 3 pointers
//   - 1-1 for each array
//   - 1 for actually tracking the curr index of the merged array
 
//  Algorithm:
//  (Have we reached to the end of any of the SubArrays) ?
//     No:
//         Compare current element of both the arrays
//         Copy smaller element into the sorted array
//         Move pointer of element containing the smaller element
    
//     Yes:
//         Copy all the remaining elements of the non-empty
//         SubArray 
        
// Algo:
// Above merge will happen for consecutive SubArrays
// Our task is to merge the 2 subArrays arr[p..q] and arr[q+1, r] 
// into a final sorted array arr[p, r]

// The merge funct. will work as follows;
// 1. Create copies of the Subarray L <- arr[p..q]
//     and M <- arr[q+1...r]

// 2. Create three pointers i, j and k
//     a.) i maintain current idx of L, starting at 1
//     b.) j maintain current idx of M, starting ar 1
//     c.) k maintain current udx of the sorted arr arr[p..q],
//         start at p
        
// 3. Until we reach the end of the either L or M.
//     pick the larger among the elements from L and M
//     and place them in the correct position at arr[p..q]
    
// 4. When we run out of the elements in either L or M
//     pick up the remaining elements from non-empty arr 
//     and put it in arr[p..q] (final sorted array)


    
#include <stdio.h>

void merge(int arr[], int p, int q, int r){
    // printf("Merge(Combining) process starts\n");
    //  Create L <- arr[p..q]
    //  Create M <- arr[q+1...r]
    
    int n1 = q-p+1;
    int n2 = r-q;
    
    int L[n1], M[n2];
    
    for(int i=0; i<n1; i++)
        L[i] = arr[p+i];
        
    for(int j=0; j<n2; j++)
        M[j] = arr[q+1+j];
        
    // Maintain current index of sub-arrays and main array
    int i, j, k;
    i=0;
    j=0;
    k=p;
    
    // Until we reach either end of L or M, pick the larger among
    // elemets in L and M and palce them in the correct pos
    // at arr[p..r]
    
    while(i<n1 && j<n2){
        if(L[i] <= M[j]){
            arr[k] = L[i];
            i++;
        }else{
            arr[k] = M[j];
            j++;
        }
        k++;
    }
    
    //  When we run out of elements in either L or M
    //  pick up the remaining elements and put them as it is
    
    // 1. Check of elements in array L is remaining ?
    while(i<n1){
        arr[k] = L[i];
        i++;
        k++;
    }
    
    // 2. Check of elements in array M is remaining ?
    while(j<n2){
        arr[k] = M[j];
        j++;
        k++;
    }
    
    
}


// Divide the array into two subarrays, sort them and merge them
void mergeSort(int arr[], int l, int r){
    printf("MergeSorting on \n");
    printArrCode(arr,l, r );
    if(l<r){
        int q = l + (r-l)/2;
        mergeSort(arr, l, q);
        mergeSort(arr, q+1, r);
        
        merge(arr, l, q, r);
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
    int arr[] = {6, 5, 12, 10, 9, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    printf("Initially array looks as: \n");
    printArr(arr, size);
    
    
    mergeSort(arr, 0, size-1);
    printf("\nSorted array looks as: \n");
    printArr(arr, size);
    return 0;
}









