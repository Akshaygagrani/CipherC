// Deleting the value from an array

#include <stdio.h>

int main()
{
    int arr[100];
    int i, delInd, n;
    
    printf("Enter the size of an array\n");
    scanf("%d", &n);
    
    for(i=0; i<n; i++){
        printf("Enter the value: ");
        scanf("%d", &arr[i]);
    }
    
    for(i=0; i<n; i++){
        printf(" %d ", arr[i]);
    }
    
    printf("\nWhat location(index) you want to delete from the array ");
    scanf("%d", &delInd);
    
    i=0;
    while(i!=delInd-1){
        i++;
    }
    
    while(i<n){
        arr[i] = arr[i+1];
        i++;
    }
    
    n--;
    
    printf("\nNew array formed is \n"); 
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
