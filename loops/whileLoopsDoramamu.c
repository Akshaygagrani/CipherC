// While loop 
// Syntax: 
    // while(<condition>){
    //     ...The block of code that you want to loop over
    // }
    
// while(condition){
//     ...
//     ..
//     ...
//     ..
// }
    
#include <stdio.h>

int main()
{
    char ans = 'N';
    printf("Hey Doramamu, Do you agree to bargain Y/N ? \n");
    
    while(ans =='N'){
        scanf("%c", &ans);
        printf("Answer is : %c", ans);
    }
    
    printf("Dr. Stranger saved us !!");

    return 0;
}
