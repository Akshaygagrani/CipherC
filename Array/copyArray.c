// / Copy the elements from one of the array to an another
#include <stdio.h>

int main()
{
    int arr1[100], arr2[100];
    int i, n;
    
    printf("Give me you number of the array size " );
    scanf("%d", &n);
    
    for(i=0; i<n; i++){
        scanf("%d", &arr1[i]);
    }
    
    //  Copy this arr1 into arr2
    
    for(i=0; i<n; i++){
        arr2[i] = arr1[i];
    }
        
        
    for(i=0; i<n; i++){
        printf("values initialley arr1[i]are these %d\n", arr1[i]);
    }
    
    printf("\n");
    for(i=0; i<n; i++){
        printf("The values in the new array pasted is %d\n", arr2[i]);
    }
        
        
    return 0;
}
