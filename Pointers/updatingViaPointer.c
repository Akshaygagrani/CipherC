#include <stdio.h>

int main()
{
    int *ptr, x, y;
    
    x = 5;
    y = 35;
    
    // Inititally storing the address of var x in ptr
    ptr = &x;
    printf("Initially the value in ptr is: %d\n",*ptr);
    
    // Updating the ptr to store the address of y
    ptr = &y;
    printf("Updated value in ptr is: %d\n",*ptr);

    return 0;
}
