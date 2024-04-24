#include<stdio.h>

int main()
{
    static char *s[] = {"black", "white", "pink", "violet"};
    char **ptr[] = {s+3, s+2, s+1, s};
    char ***p;
    // ptr = ptr[0] = s+3
    p = ptr;
    
    ++p; // ++p = p+1 = ptr+1 = ptr[1] = s+2
    
    // **p = pink
    // p is the pointer of type char, char takes 1 byte
    // **p+1 => ink
    // This will shift the pointer to the next caharacter 
    printf("%s", **p+1);
    return 0;
}
