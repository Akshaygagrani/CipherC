// Calculate average
#include <stdio.h>

int main()
{
    int marks[10], i, n, sum=0, avg;
    
    
    printf("Let us know the number of items ");
    scanf("%d", &n );
    
    
    
    for(int i=0; i<n; i++){
        printf("Enter the number");
        scanf("%d", &marks[i]);
        sum+=marks[i];
    }

    avg = (double) sum/n;
    printf("Accounts average is %d", avg);
}















