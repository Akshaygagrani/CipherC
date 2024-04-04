
#include <stdio.h>

int main()
{
    int i = 0;
    int j = 0;
    int arr[2][3] = { {1, 5, 7}, {13, 19, 21}};
    
    for(i=0; i<2; i++){
        // printf("%d Row elements are: ", i);
        for(j=0; j<3; j++){
            printf(" %d ", arr[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
