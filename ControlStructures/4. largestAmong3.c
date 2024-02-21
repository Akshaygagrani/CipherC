// Find the largest number among the 3 varaibles..

// Input: 
//  a = 5
//  b = 10 
//  c = 15
// Output : "The variable c is the largest with the value: 15"


// 1st Approach:

// if(a > b, c)

// if(b > a, c)

// if(c > b, c)

// 2nd Approach: If..else ladder

// if (a > b,c)
    // a is largest
// elif (b > a,c)
    // b is largest
// else
    // c is largest

// 3rd Approach: nested if..else

// if(a>k){
//     // we know : a > k
//     if(a > s){
//         // we know a > s
//         & we already know that a>k
//         a > k,s: so a is the largest number
//     }else{
//         // we know s > a
//         & we already know that a>k
//         s > a > k: so s is the largest number
//     }
// }else{
//     //  we know k > a
//     if(k > s){
//         // we know k > s
//         & we already know that k>a
//          k > s, a: so k is the largest number
//     }else{
//         //  we know s > k
//         & we already know that k>a
//         s > k, a: so s is the largest number
//     }
// }


#include <stdio.h>

int main()
{
    int a, k, s;
    printf("Enter the ages of alok, khushi & Shivam respectively \n");
    scanf("%d %d %d", &a, &k, &s);
    
    if(a>=k){
        
        if( a >= s ){
            printf("a is the largest with the values as: %d", a);
        }else{
            printf("s is the largest with the values as: %d", s);
        }
    }else{
        if(k>=s){
            printf("k is the largest with the values as: %d", k);
        }else{
            printf("s is the largest with the values as: %d", s);
        }
    }

    return 0;
}
