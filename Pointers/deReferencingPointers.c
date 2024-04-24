// De-referencing the Pointers
// x = 5
// int* ptr = &x;

// * operator is called as De-referencing operator
//  To get the value of the thing pointed by the Pointer
// we use the * operator

// printf(*ptr) => 5

#include <stdio.h>

int main()
{
    int *ptr;
    int x;
    x=5;
    
    ptr = &x;
    
    printf("The x is stored at: %p\n", ptr);
    printf("Value at the address where ptr points is: %d\n", *ptr);
    printf("The value of x is : %d", x);
    
    printf("\n\n");
    
    // Let us try to update the value Pointed by Pointers
    // ptr -> x
    
    x = 1;
    printf("After updating x is stored at: %p\n", ptr);
    printf("Updated Value at the address where ptr points is: %d\n", *ptr);
    
    printf("\n");
    
    *ptr = 99;
    printf("After new update x is stored at: %p\n", ptr);
    printf("Dereference Update in Value where ptr points is: %d\n", *ptr);
    
    return 0;
}









