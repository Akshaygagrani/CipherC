// Write a program to reverse an integer...
// n = 123, 5435, 3
// Output -> 321, 5435, 3

// 123 % 10 = 3
// 120 % 10 = 0
// 126 % 10 = 6

// 0.123 ->

// remainders = 3 2 1
// new value of n = .123

// // Multiplying the previous remainder by 10 and adding the new remainder to it
// reverseNum = reverseNum*10 + remainder
// 3*10 = 30
// 30*10 + 2 = 32
// 32*10 + 1 = 321

// reverseNum = 54
// 345 -> 34.5 -> 3.45 -> 0.345 -
// -> remainder = 3
// reverseNum = 54*10 + 3 = 543


// DRY RUN SNIPPET
// n -> 0
// reverse = 645
// remainder -> 5

// reverse = 64*10 + 5


#include <stdio.h>

int main()
{
    int n, temp, reverse = 0, remainder;
    
    printf("Enter an integer ");
    scanf("%d", &n);
    temp = n;
    
    while(n!=0){
        remainder = n % 10;
        reverse = reverse*10 + remainder;
        n/=10;
    }
    
    if(reverse==temp){
        printf("It is a Palindrom");
    }else{
        printf("It is NOT a Palindrom");
    }
    
    // printf("The reverse of your given number is: %d", reverse);

    return 0;
}
