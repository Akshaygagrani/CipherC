//  Assignment operators
// = => a = b
// += => a+=b <=> a = a+b
// -= => a-=b <=> a = a-b
// *= => a*=b <=> a = a*b
// /= => a/=b <=> a = a/b

// Next to be discussed is -: Increment/Decrement, Relational, Logical, Bitwise

#include <stdio.h>

int main()
{
    int a = 15;
    int b = 3;
    
    printf("a: %d b: %d\n", a, b);
    printf("a*=b is : %d\n", a*=b);
    printf("a: %d b: %d", a, b);

    return 0;
}
