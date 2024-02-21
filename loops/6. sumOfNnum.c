// Program to find the sum of 0 to n numbers

// HW -> Make this program integer friendly and not just for +ve integer
// num = 5
// sum = 15
// for(0 -> 5):
// 0
// 1
// 2
// 3
// 4
// 5

#include <stdio.h>
int main()
{
    int num, count, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    for(count = 1; count<=num; count++){
        sum += count;
    }
    
    printf("Sum is %d", sum);

    return 0;
}
