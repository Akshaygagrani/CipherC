// Write a program to reverse the string;

// str1 = "Akshay"
// output - "yahskA"


// str1 = "Akshay" loop this string backwards

// str1 = ['A', 'k', 's', 'h', 'a', 'y']
//      i   |

// output = ['y', 'a', 'h', 's', 'k', 'A']



// output = 


#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100
int main()
{
    char str1[MAX_SIZE];
    char str2[MAX_SIZE];
    int idx, revString_idx, len;
    
    printf("Enter the string to reverse: ");
    gets(str1);
    
    len = strlen(str1);

    revString_idx = 0;
    idx = len-1;
    
    while(idx>=0)
        str2[revString_idx++] = str1[idx--];
    
    str2[revString_idx] = '\0';
    
    printf("Original String is %s\n", str1);
    printf("Reversed String is %s\n", str2);

    return 0;
}










