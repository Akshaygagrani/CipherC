// // C strcat()
// -: the function strcat() it concatenates the destination string and the source
//     string and result is stored in the destination string
    
// s1 = "Akshay"
// s2 = " Gagrani"

// concat(s1, s2) = "Akshay Gagrani"
    
// prototype is 
// char *strcat(char *destination, const char * source);

// *Note -: We need to make sure that the size of the destination string
//         is large enough to store the resultant string
//          otherwise we will get the segmentation fault
#include <stdio.h>
#include <string.h>


int main()
{
    char str1[100] = "My name is ";
    char str2[100] = "Akshay Gagrani";
    
    strcat(str1, str2);
    printf("The new value in str1 is %s\n", str1);
    printf("The new value in str2 is %s\n", str2);

    return 0;
}

