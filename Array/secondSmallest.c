// Find the second smallest number from a given array
#include <stdio.h>

int main()
{
    
    int arr[100], n, i, j;
    int smll, secSmall;
    
    printf("Enter value of n");
    scanf("%d", &n);
    printf("Input %d elements in the array (value must be <9999) :\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    
    // find the smallest cariable first
    secSmall = arr[0];
    for(i=0; i<n; i++){
        if(smll > arr[i]){
            smll = arr[i];
            j=i;
        }
    }
    
    smll= arr[0];
    for(int i = 0; i<n; i++){
        if(smll>arr[i]){
            smll = arr[i];
        }
    }
    

    secSmall = 9999;
    for(i=0; i<n; i++){
        if(i==j){
            i++;
            i--;
        }if(secSmall > arr[j]){
            secSmall = arr[j];
        }
    }
    
    printf("Secondary smallest value is %d", secSmall);
    return 0;
}
