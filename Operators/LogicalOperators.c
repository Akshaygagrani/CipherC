// LOGICAL operators (inputs: Boolean values 
//                    output: Boolean value)

// AND -> && 
//  True && True => True
//  True && False => False
//  False && True => False
//  False && False => False
 
// OR  -> ||
//  True || True => True
//  True || False => True
//  False || True => True
//  False || False => False

// NOT -> !
// !True => False
// !False => True

#include <stdio.h>

int main()
{
    
    // int a = 5;
    // int b = 5;
    // int c = 10;
    // int result;
    //     //   True  AND  True   
    // result = (a==b) && (c>b); // => True
    // printf("(a==b) && (c>b) is = %d\n", result);

// Aunty said Yes =>
    // Uncle says NO: Let's go some other time its sunny there
    // Uncle says Yes: GOA IS ON !!!
    
// Aunty said No =>
    // Uncle says NO: You guys carry ON, I'll join some other day
    // Uncle says Yes: GOA is not ON 

    int a = 1;
    printf("The value of a after NOT is: %d",!a);
    
    // int aunty = 0;
    // int uncle = 1;
    
    // int goaIsOn;
    
    // goaIsOn = aunty && uncle;
    
    // if(goaIsOn){
    //     printf("Goa is ON !!!");
    // }else{
    //     printf("You guys carry ON, I'll join some other day");
    // }
    

    return 0;
}
