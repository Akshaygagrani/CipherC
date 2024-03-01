// Write a program in C to count the digits of a given number using recursion.
// Example:
// N = 12345
// output = 5

// N = 1
// Output = 1


#include <stdio.h>

int noOfDigits(int n);
int main()
{
    int n, count;
    printf("Enter the number to count the digits: ");
    scanf("%d", &n);

    count = noOfDigits(n);
    printf("\n No of digits found is = %d",count);
    return 0;
}

int noOfDigits(int n){
    int ctr = 0;
    
    // Base Case
    if(n!=0){
        ctr++;
        noOfDigits(n/10);
    }
    
    return ctr;
}
