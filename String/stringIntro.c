// Strings in C:
// caharacters -: (a, b, c, d....z),(A-Z), (0- 9), $, %,.......
// It is just a sequence of caharacters, terminated with '\0' (null/EOF caharacter)

// Example -:
// name = "Akshay"
// cahracterstics = "The Best"

// name = ['A', 'k', 's', 'h', 'a', 'y', '\0']


// c1 = 'A'
// c2 = 'k'
// c3 = 's'
// c4  ..
// c5  ...
// c6  ....

// Syntax -: 

//     int age[] = {1, 2, 3, 4, 5}; 
// // 1st Way
//     char name[] = "Akshay"
//     name = ['A', 'k', 's', 'h', 'a', 'y', '\0']

// // 2nd Way
//     char c[] = "Akshay"
//     char c[20] = "Akshay"
//     char c[] = {'A', 'k', 's', 'h', 'a', 'y', '\0'}
//     char c[20] = {'A', 'k', 's', 'h', 'a', 'y', '\0'}
    
// Double quotes
// " " <- Double quotes specifies that the word/part of the code is a string


#include <stdio.h>

int main()
{
    char name[] = "Akshay";
    
    printf("My name is %s", name);

    return 0;
}








