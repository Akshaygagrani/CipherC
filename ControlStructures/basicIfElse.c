// Flow Controls -:
// If...Else statement
// Syntax:
    
//     if(condition){
//         // If condition is true, then the code below will get executed
//         // ... Code
//     }

// if(this is true){
//     then execute this..
// }else if("else" if this is true){
//     then execute this...
// }else if("else" if this is true){
//     then execute this...
// }else{
//     if none of the above is true then execute this...
// }


#include <stdio.h>

int main()
{
    int a;
    
    printf("Enter an integer: ");
    scanf("%d", &a);
    
    if(a > 0){ //-> False
        printf("Given input is a positive integer \n");
    }else if(a < 0){ // -> False
        printf("Given input is a negative integer \n");
    }else{
       printf("Given integer is zero");
    }
    
    return 0;
}
