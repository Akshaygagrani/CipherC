// Print Factorial of a number; input is +ve number
// 0! = 1
// 5! = 5*4*3*2*1 = 120
// 7! = 7*6*5*4*3*2*1
#include <stdio.h>

int main()
{
    int n, i;
    unsigned long long int fact = 1;
    printf("Enter the number: \n");
    scanf("%d", &n);
    
    if(n<0)
        printf("Invalid Input");
    else{
        for(i=1; i<=n; i++){
            fact *= i;
        }
        printf("Factorial of %d is = %llu", n, fact);
    }
    
    return 0;
}
