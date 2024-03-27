// Finding the maximum and minimum element from an array !!

#include <stdio.h>

int main()
{
    int arr[100];
    int i, max, min, n;
    
    printf("Enter the size of an array\n");
    scanf("%d", &n);
    
    for(i=0; i<n; i++){
        printf("Enter the value: ");
        scanf("%d", &arr[i]);
    }
    
    max = arr[0];
    min = arr[0];
    
    for(i=1; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    
    printf("\n The maximum value in the array is %d\n", max);
    printf("\n The minimum value in the array is %d\n", min);
    

    return 0;
}
