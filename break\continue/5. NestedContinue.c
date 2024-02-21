// Continue statement with Nested for loop

#include <stdio.h>

int main()
{
    int i, j;
    for(i = 1; i<=3; i++){
        
        for(j = 0; j<=4; j++){
            
            if(j==3){
                continue;
            }
            
            printf("i = %d, j= %d\n", i,j);
            
        }
      
        printf("\n");
    }

    return 0;
}
