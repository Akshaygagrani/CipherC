// C program - To print the diagonals of the matrix

// 1 2 3 -> (0,0)
// 4 5 6 -> (1,1)
// 7 8 9 -> (2,2)

// 1 
//   5
//     9

#define MAXROW 10
#define MAXCOl 10

#include <stdio.h>

int main()
{
    int arr[MAXROW][MAXCOl];
    
    int i, j, r, c;
    
    
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
    
    
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            if(i==j){
                printf(" %d ", arr[i][j]);
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
