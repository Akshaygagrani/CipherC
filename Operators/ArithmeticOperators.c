// ARITHMATIC OPERATORS in C-Lang

// + => addition
// - => Subtraction
// * => Multiplication
// / => Divide
// % => Modulus/Remainder -> It gives the remainder as an output of division

#include <stdio.h>

int main()
{
    int a = 14;
    int b = 4;
    
    //Operands are required to be in float for exact division 
    float e = 9.0;
    float g = 4.0;
    
    int c;
    float d;
    
    c = a%b;
    printf("a modulus b = %d\n", c);
    
    c = a+b;
    printf("a+b = %d\n", c);
    
    c = a-b;
    printf("a-b = %d\n", c);
    
    c = a*b;
    printf("a*b = %d\n", c);
    
    d = e/g;
    printf("e/g = %f", d);
    
    return 0;
}
