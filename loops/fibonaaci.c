// Print Fibonacci Series upto n  in C
// t1, t2,  nt
//     t1,  t2, nt
// 0,   1,  1,  2,  3, 5, 8, 13.....
#include <stdio.h>

int main()
{
    int i, n;
    
    // Initialising the first 2 terms as they will remain constant always
    int t1 = 0, t2 = 1;
    
    // Initialising the next term (3rd term in this case)
    int nextTerm = t1 + t2;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    // Print the Series
    printf("Fibonacci series : %d, %d, ", t1, t2);
    
    // Print from 3rd to nth term
    for(i=3; i<=n; i++){
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    

    return 0;
}
