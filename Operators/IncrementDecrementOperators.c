// ******** Increment and the Decrement Operators
// Increment operator => ++ -> increases the value of varaiable by 1
// Decrement operator => -- -> decreases the value of varaiable by 1

// var = 5;
// var++ => var = var + 1
// var-- => var = var - 1

// var++ => Post increment/decrement Operator 5, 5, 6
// ++var => Pre  increment/decrement Operator 5, 6, 6

#include <stdio.h>

int main()
{
    int a = 5;
    
    // printf("The value of a was: %d", a);

    // printf("\nThe new incremented value of a is: %d", ++a);
    // // a++;
    // printf("\n %d", a);
        
    printf("--a = %d\n", --a);  // => a = 4
    printf("a-- = %d\n", a--); // print a = 4
    // a = 3
    printf("The value of a is %d\n", a); // print a = 3
    
    
    return 0;
}
