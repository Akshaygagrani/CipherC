// Write a program in C to find the Factorial of a number using recursion. 
// Factorial -: 
// 5! = 5*4*3*2*1 = 120
// 4! = 4*3*2*1 = 24
// 3! = 3*2*1 = 6
// 2! = 2*1 = 2
// 1! = 1
// 0! = 1

// n! = n * (n-1) * (n-2) * ........ 1
// (n-1)! = (n-1) * (n-2) * (n-3) * .....1

// n! = n* (n-1)!

// fact(n) = n * fact(n-1)



#include <stdio.h>

int findFact(int n);
int main()
{
    int n, fact=0;
    printf("Enter a positive integer to find factorial: ");
    scanf("%d", &n);
    
    fact = findFact(n);
    
    printf("The factorial of %d is : %d", n, fact);

    return 0;
}


int findFact(int n){
    // Base Case 
    if(n==1){
        return 1;
    }else{
        // Recursive Case
        return n*findFact(n-1);
    }
}
    
    
    
    
    
    
    
