// Reverse the string without using any extra space !!
// - 2 Pointer Approach

// n = 6

// j = 6-1 = 5
// i = 0
// name = "A k s k h a y"
//               i
//               j


#include <stdio.h>
#include <string.h>

# define MAX_SIZE 100
int main()
{
    char str[MAX_SIZE];
    char temp;
    int i, j, n;
    
    printf("Enter the string: ");
    gets(str);
    
    // n = strlen(str);
    
    // i = 0;
    // j = n-1;
    
    // while(i<j){
    //     temp = str[i];
    //     str[i] = str[j];
    //     str[j] = temp;
        
    //     i++;
    //     j--;
    // }

    printf("The reversed string is: %s", strrev(str));
    return 0;
}
