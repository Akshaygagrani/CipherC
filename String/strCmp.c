// // C strcmp()
// -: This function Com[are two strings caharacter by caharacter
// -: If the strings are equal then it returns 0

// Output -: 
// 0  - strings are equal
// <0 - first non-matching char in str1 is greater
//         (ASCII) than str2
// >0 - first non-matching char in str1 is lower
//         (ASCII) than str2

// strcmp() prototype -:
// int strcmp(const char *str1, const char*str2)


#include <stdio.h>
#include <string.h>

int main()
{
    char c1[] = "Akzhay";
    char c2[] = "Akshay";
    
    
    
    int result = strcmp(c1, c2);
    printf("strcmp(c1, c2 = %d)\n", result);
    

    return 0;
}
