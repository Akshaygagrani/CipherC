// Continue Statements; 
// The continue statement in C can be used in any kind of loop to skip the current iteration of the loop 
// (in which continue statement is written in)


#include <stdio.h>

int main()
{
    int i;
    
    // // For Loop from 1 to 8 
    // for(i = 1; i<=8; i++){
    //     // if the value in i = 5 then skip that particular iteration
    //     if( i == 5 ){
    //         continue;
    //     }
    //     printf("%d ", i);
    // }
    
    
    // To skip the iteration when i is even number
    for(i=0; i<=25; i++){
        
        if(i%2 == 0){
            continue;
        }
        printf("%d ", i);
    }
    
    

    return 0;
}
