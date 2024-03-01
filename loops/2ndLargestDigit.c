// 2nd Largerst digit in a given number

#include <stdio.h>

int main()
{
    int n, rem, largest=0, secondLargest = 0 ;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    while(n>0){
        rem = n%10;
        
        if(rem>largest){
            secondLargest = largest;
            largest = rem;
        }else if(rem > secondLargest){
            secondLargest = rem;
        }
        n = n/10;
    }

    printf("\nThe second largest value is %d", secondLargest);
    return 0;
}
