// Puts is the part of the stdio.h header library itself
// It prints the string, caharacter by caharacter until the null char is encountered
// New line char is inserted in the output after the end of the string.

// Syntax -:
// puts(char *str)

// Return value -:
// - If the execution of the puts was success then it will print the non-negative value
// - Else, EOF error is returned

// Difference between printf & puts function
// printf -: Allows you to print the string using only the allowed specifiers 
// puts   -: Do not requires specifiers

// printf -: Do not add new line caharacter by default
// puts   -: adds the new line caharacter by default at the end of the string

// printf -: It returns the number of char it printed
// puts   -: prints the non-neg number only when SUCCESS else error

// printf -: It can handle multiple string by concatenating them
// puts   -: Does not supports multiple strings in the parameters

// printf -: It can print any type of the data 
// puts   -: Can only print the string data

#include <stdio.h>

int main()
{
    char* str = "Hello From Akshay";
    int a = 5555;
    char name[] = "Akshay";
    
    // printf("\n %d", puts(str));
    
    printf("%d", printf("%d", printf("%d",a)));
    
    // puts("How are you all doing ?");

    return 0;
}
