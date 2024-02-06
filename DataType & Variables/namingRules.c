// Rules for naming variable 

// 1. UC, LC, Digitis & underscore -: & ^ * ( ) ! 
//     Eg -: XAE-12, XAE*12, XAE/12
// 2. The first letter of the variable should be an Alphabet or underscore
//     Eg -: 3Akshay, 4Akki, @kki
// 3. The reserved keywords of C should no be used as the variable
//     Eg -: char, int, switch, return...

#include <stdio.h>

int main()
{
    int witch;
    printf("Enter the value for witch ");
    scanf("%d", &witch);
    printf("The value of witche received is: %d", witch);
    
    return 0;
}
