// Merge Sort 
Step 1 : If it is inly one element in the list then consider it 
        already sorted, so return
Step 2 : Divide the list recirsively into two halves until it can no
        more be divided
Step 3 : Merge the smaller lists into new list in sorted order


// PseudoCode for Merge Sort:

procedure MergeSort(arr)
    if(n==1)
        return arr;
    
    leftArr = arr[0]...arr[n/2];
    rightArr = arr[n/2 + 1]...arr[n];
    
    leftArr = mergeSort(leftArr)
    rightArr = mergeSort(rightArr)
    
    return merge(leftArr, rightArr)
    
procedure merge(leftArr, rightArr)
    arr[] c: c[n1+n2]
    
    var a,i: leftArr
    var b,j: rightArr
    
    // Comparing and adding the values to arr c with 2 pointer approach
    while(i<n1 and j<n2){
        if(a[i] > b[j]):
            add(a[i] to the end c) 
            i++
        else:
            add(b[j] to the end c)
            j++
    }
    
    // Copying all the remaning values from leftArr as it is
    while(i<n1){
        add(a[i] to the end of c)
        i++
    }
    
    // Copying all the remaining values from rightArr as it is
    while(j<n2){
        add[b[j] to the end of c]
        j++
    }

#include <stdio.h>

int main()
{
    printf("Hello World");

    return 0;
}
