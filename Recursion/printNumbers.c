// Write a program to print natural numbers from 1 to n using recursion
#include <stdio.h>

int numPrint(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    numPrint(n);

    return 0;
}

int numPrint(int n){
    // Base Case 
    if(n!=0){
        printf("%d ", n--);
        numPrint(n);
    }
}


