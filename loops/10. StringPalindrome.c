// String Palindrome in C..........
// Using 2 pointer approach

// isPalindrome(akshay) -> False

// isPalindrome(aabaa) -> True
// -> string is combination of caharacters
// char var = 'a'
// char str[] = ['aabaa'];
// str = 'aabaa'
//       01234    

// string = a   a    b    b   a   a
//                   |    |
//                  2nd  1st

#include <stdio.h>
#include <string.h>

int main()
{
    char str[ ] = {"aabbca"};
    
    // Start from left and
    // Last caharacter of str
    
    int l = 0;
    int r = strlen(str) - 1;
    
    // Keep comparing until l < r
    while(r>l){
        if(str[l++] != str[r--]){
            printf("The string %s is not a palindrome", str);
            return 0;
        }
    }
    printf("The string %s is a palindrome", str);

    return 0;
}
