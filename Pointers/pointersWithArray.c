// Pointers and 1-D array

#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr;
    ptr = arr;
    
    printf("%d\n", *ptr);
    printf("%d\n", *(ptr+1));
    printf("%d", (*ptr)*2); // 1*2 = 2

    return 0;
}
