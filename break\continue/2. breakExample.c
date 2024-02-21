// Break Statements

#include <stdio.h>

int main()
{
    int num;
    
    int i;
    int j;
    
    // printf("Give me the number below 100 \n");
    // scanf("%d", &num); // = 5
    
    // 1st Loop 
    //     i = 5 -> // value of i is 0
    //     inside 1st Loop
    //         j = 0
    //         print(65) -> A
    //     break inside loop
    // next iteration
    
// Break statements breaks the flow of the loop containing it !!
    
    // i -> 0, 1, 2, 3 4
    for(i=0; i<5; i++){
        
        printf("The vaue of i is %d\n", i);
        
        for(j=0; j<=3; j++){
            // j = 0 - 4
            if(i== 3 && j == 2){
                break;
            }
            printf("   %c\n", j+65);
        }
        
    }

    return 0;
}


Next Things to learn -:
    Practice problem on Switch Case
    Continue
    goTo
    
    
    
    
