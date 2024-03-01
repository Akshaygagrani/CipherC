// Write a recusrive program to find whether a given integer is palindrome or not
// 121 - Yes
// 532 - NO
// 6556 - Yes

// newNum = 321
// newNum = newNum*10 + r
//           32*10    + 1

// 123 % 10 -: 3
// n = 12
// r = 3

// 12 % 10 -: 2
// n = 1
// r = 2

// 1%10 -: 1
// n = 0
// r = 1

// n==0 ? YES so finish




#include <stdio.h>

int rev(int n, int newNum);

int main()
{
    int n, reverseNum;
    printf("Give an integer to find the palindrome: ");
    scanf("%d", &n);
    
    reverseNum = rev(n, 0);
    
    if(reverseNum == n){
        printf("\nYES");
    }else{
        printf("\nNO");
    }

    return 0;
}

int rev(int n, int newNum){
    // Base Case
    if(n==0){
        return newNum;
    }
    // Recursive Case
    newNum = newNum*10 + (n%10);
    return rev(n/10, newNum);
}
