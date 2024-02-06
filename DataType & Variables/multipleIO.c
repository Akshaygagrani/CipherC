#include <stdio.h>

int main()
{
    double d;
    float f;
    
    printf("Enter integer and float value respectively: ");
    
    // Multiple I/O
    scanf("%lf %f", &d, &f);
    printf("Double value is : %lf and float is: %f", d, f);
    
    return 0;
}
