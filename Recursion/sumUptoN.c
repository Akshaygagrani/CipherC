// Recursion porblems
// Write a program to find the sum of numbers from 1 to n via recursion, where n>=1
// Ex1
// n = 1
// Output: 1

// Ex2
// n = 5->4->3->2->1
// output = 15

#include <stdio.h>

int getSum(int); //Function Prototyping
int main()
{
    int n;
    int sum;
    
    printf("Input the number n: ");
    scanf("%d", &n);
    
    sum = getSum(n);
    
    printf("The output is: %d", sum);

    return 0;
}

// The Key of the recursive solution is to believe that 
// - Your recursive function call will bring the right answer for you !!

int getSum(int x){
    int res;
    // Base Case
    if(x == 1){
        return 1;
    }else{
        // Recursive call
        res = x + getSum(x-1);
    }
    return res;
    
}
