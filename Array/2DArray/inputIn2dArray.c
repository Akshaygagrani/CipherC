
#include <stdio.h>

int CITY = 2;
int WEEK = 4;

int main()
{
    
    int temperature[CITY][WEEK];
    
    for(int i = 0; i<CITY; i++){
        for(int j =0; j<WEEK; j++){
            printf("City %d, Week %d: ", i+1, j+1);
            scanf("%d", &temperature[i][j]);
        }
    }
    
    printf("\n The Temperature Data looks like as foolowing\n");
    
    for(int i=0; i<CITY; i++){
        for(int j=0; j<WEEK; j++){
            // printf("Temperature in City %d on Day %d = %d\n", i+1, j+1, temperature[i][j]);
            printf("%d ", temperature[i][j]);
        }
        printf("\n");
    }

    return 0;
}
