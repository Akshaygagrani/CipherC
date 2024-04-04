// Write a C program where we have to find the sum of each row of a matrix

#define MAXROW 10
#define MAXCOl 10

#include <stdio.h>

int main()
{
    int arr[MAXROW][MAXCOl];
    
    int i, j, r, c;
    int sum;
    
    printf("Enter number of rows: ");
    scanf("%d", &r);
    
    printf("Enter number of cols: ");
    scanf("%d", &c);
    
    
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("Enter Element [%d %d]: ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }
    
    printf("\n");
    
    
    for(i=0; i<r; i++){
        sum = 0;            // initialising back to 0 for the new row
        for(j=0; j<c; j++){
            sum += arr[i][j];
        }
        
        printf("%d \n", sum);
    }
    
    

    return 0;
}
