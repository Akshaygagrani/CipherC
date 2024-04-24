// Types Of Pointers
- Point to Derived data Types such as Arrays
- Point to premitive data Types such as int
- Point to User-defined data types such as Arrays

1. Integer Pointers - 
- As the name suggest, an integer pointer is nothing but a pointer taht points
to the integer value;
Syntax: int *ptr

2. Function Pointers - 
- Are actually little different form the normal pointers 
as normal pointers points to the data
but instead funct1n. pointer points to the code block
- int func(char, float)
Syntax : int (* ptr)(char, float)
        ptr = &func;

3. NULL Pointer - 
- The NULL pointers are those that do not points to any memory Location
- They are created by assigning the NULL values to the pointer
- Pointer of any type can be assigned the NULL value
Syntax:
    data_type *ptr = NULL;
            or
    *ptr = NULL
    
4. Void Pointer -(Generic Pointers)
- Void pointers in C are the pointers of type Void.
- Whoch means that they do not have any associated data type.
They are also Generic Pointers as they can point to any type and can 
be typeCasted to any type
- The void pointers cannot be derefrenced
Syntax: 
    void *ptr;
    
5. Wild Pointer -
- The wild pointers that have not been initialised with something yet;
- These types of C-pointers can cause problems in our programs and can eventually 
cause them to crash.
Syntax:
    int *ptr;
    char *ptr;
    
6. Constant Pointers -
In constant Pointers the memory address stored inside the pointer is constant and 
cannot be modified once defined.
- It will always point to the same memory location
Syntax:
    data_type * const ptr_name
    
7. Pointer to Constant 
- The pointer pointing to a constant value taht can not be modified are called 
pointer to a constant
Here we can only access the data poitned by the pointer, but can not modify it
- Although we can change the addess stored in the pointer to constant.
Syntax:
    const int *ptr_name
    
8. Dangling pointer
- A pointer pointing to a memory location that has been deleted (or freed) 
is called a dangling pointer




#include <stdio.h>

int main()
{
    printf("Hello World");

    return 0;
}
