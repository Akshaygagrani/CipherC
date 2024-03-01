// Recursion -: A function calls itself is knows as a recursive function. and,
            //  this technique is known as Recursion

// Syntax:

// void fun(){
//     ...
//     ....
//     fun();
//     .....
    
// }

// int main(){
//     ...
//     ....
//     fun();
//     .....
//     ......
// }

//  Let's find the sum of natural numbers from 1 to n using recursion

// input = 5
// sum - 15+0 = 15
// 0
#include <stdio.h>

int getSum(int n); // Function Prototype

int main()
{
    int a, sum;
    printf("Give me an integer: ");
    scanf("%d", &a);

    sum = getSum(a);
    printf("\nThe sum received is : %d", sum);
    return 0;
}

int getSum(int n){
    int result;
    
    // Base Case
    if(n==1){
        return 1;
    }else{
        result = n + getSum(n-1);
        // f(n) = n + f(n-1);
    }
    
    return result;
}
