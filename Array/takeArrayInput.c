#include <stdio.h>

// arr ->  _  _  _  _  _
// index - 0  1  2  3  4


int main()
{
    int arr[100];
    int n, i;
    
    printf("Give the size of the array between 1 to 100\n");
    scanf("%d", &n);
    
    for(i=0; i<n; i++){
        printf("Give me the input\n");
        scanf("%d", &arr[i]);
    }
    
    
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    
    

    return 0;
}
