// Pointers in C
// Declaration of Pointers
    // - Both the ways are totally fine to declare the pointer in C
//   int *ptr
//   int* ptr
    
    // Here p1 would be a pointer and p2 is just a normal int variable
    // int *p1, p2;
    

#include <stdio.h>

int main()
{
    int *ptr, x;
    x = 5;
    
    ptr = &x;
    
    printf("The varaible x is stored at: %p\n", &x);
    printf("The pointer is pointing at add: %p", ptr);

    return 0;
}
