// Given 2 row numbers, write a program to interchange the given rows

#define MAXROW 10
#define MAXCOl 10

#include <stdio.h>

int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    int i, j, first, second, temp;
    
    
    printf("Enter the 2 rows you want to interchange: ");
    scanf("%d", &first);
    scanf("%d", &second);
    
    
    for(i=0; i<3; i++){
        // Swapping the elements of the row(first & second) one by one with each other
        // By looping over the collumns using i;
        temp = arr[first-1][i];
        arr[first-1][i] = arr[second-1][i];
        arr[second-1][i] = temp;
    }
    
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf(" %d ", arr[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
