//  For a given 2-d array find the Transpose of it 

#define MAXROWS 10
#define MAXCOLS 10

#include <stdio.h>

int main()
{
    int i, j;
    int rows, cols;
    
    int arr[MAXROWS][MAXCOLS];
    int transpose[MAXROWS][MAXCOLS];
    
    printf("Enter the size of the matrix/2-d array: \n");
    scanf("%d %d", &rows, &cols);
    
    // Taking the input for the original array
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            printf("Enter the arr[%d][%d] ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    
    printf("Original Array: \n");
    // Printing the original array
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            printf(" %d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    
    // Creating the transpose Matrix
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            transpose[j][i] = arr[i][j];
        }
    }
    
    printf("Transposed Array: \n");
    // Printing the transpose matrix
    for(i=0; i<cols; i++){
        for(j=0; j<rows; j++){
            printf(" %d ", transpose[i][j]);
        }
        printf("\n");
    }
        
    return 0;
}






