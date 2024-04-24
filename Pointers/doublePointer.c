// Double Pointer 

#include <stdio.h>

int main()
{
    int var = 159;
    
    // Pointer to var
    int *ptr1;
    
    // Double Pointer to pointer ptr1
    int **ptr2;
    
    // initialising the ptr1 with address of var
    ptr1 = &var;
    
    // initialising the ptr2 with address of ptr1
    ptr2 = &ptr1;
    
    
    printf("Value of var is %d\n\n", var);
    
    printf("Address in ptr1 is %p\n", ptr1); // address to which ptr1 is pointing to (add of variable var)
    printf("Value ptr1 points to is %d\n\n", *ptr1); // De-referenced ptr1 -> finding the value stored at address it 
                                                    // points to (finding the value stored at var)
    
    printf("Address of ptr1 is %p\n", &ptr1);   // address of pointer ptr1 itself where it is stored
    
    printf("ptr2 points at address %p\n", ptr2); // The value in ptr2 - i.e address of ptr1
    
    printf("final var ptr2 points to is %d\n", **ptr2); // Value stored at the address - where the pointer which
                                                        // we are pointing to consist
                                                        // (value at the address consisted by ptr1)
                                                        
    printf("Size of Normal Pointer: %lu\n", sizeof(ptr1));                                                  ;
    printf("Size of Double Pointer: %lu\n", sizeof(ptr2));
    
    return 0;

    
    
    
    
}
