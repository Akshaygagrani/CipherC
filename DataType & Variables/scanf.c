// scanf function
#include <stdio.h>

int main()
{
    float f;
    double num;
    
    printf("Enter a float number: ");
    scanf("%f", &f);
    
    printf("Enter an another number: ");
    scanf("%lf", &num);
    
    printf("The float variable is : %f \n", f);
    printf("The double variable is : %lf", num);
    

    return 0;
}
