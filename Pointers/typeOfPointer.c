// Types of Pointers 
    // If we consider the type of variable stored in the memotry location
    // pointed by the pointer, then the pointers can be classified
    // into following types;

1. Integer pointers :
// - They are the pointers to the integer values
// Syntax: int *ptr
// pointer to integer

2. Array Pointer :
// Pointers and Array are vaery closely related
// bcz, array name is also the pointer to its first element
// Array name is also known as Pointer to arrays

// Syntax: char *ptr = &arr_name;

3. Function Pointers :
// Function pointer will point to the function.
// They are diff from the rest of the pointers in the sense
// that insetead of pointing to the data, they point to the consider

// Syntax: 

// int func(int, char);
// int (*ptr)(int, char) = &func

// - The syntax of the function pointer changes acc to
// the func prototype

4. void pointer :
// The void pointers in C are the pointer of type void
// Which means, they do not have any associated data type
// They are also called GENERIC POINTERS
// as they can point to any type and can be typecasted to any type

// Syntax: void *ptr

// - The void pointer cannot be dereferenced

5. null pointer :
// The null pointers are the pointers which do not point to any 
// memory location.
// They can be created by assigning a null value to the pointer
// A pointer of any type can be a NULL pointer

// Syntax: data_type *ptr = NULL
// Eg. int * ptr = NULL


6. Wild pointer:
// A wild pointer is a pointer that is not initialised till its
// first use 
// Initially they hold some arbitrary memory location in it, 
// & this any operation on them might cause the program to crash

// -Wild pointer will neither consist the location of a variable 
// neither it will consist the Null value

// Syntax: int * ptr; //wild pointer

// Eg: 
// int main(){
//     int *ptr;
//     *ptr = 9;
// }

Dangling pointer - Dynamic memory alloc
// The pointer which points to a address of the variable
// which has been deleted

#include <stdio.h>

int main()
{
    printf("Hello World");

    return 0;
}
