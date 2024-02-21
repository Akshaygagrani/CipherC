// break Statements
// Syntax:
//     break;

#include <stdio.h>

int main()
{
    int i, n = 7, brb;
    
    printf("Enter the value to breakup\n");
    scanf("%d", &brb);
    
    for(i=0; i<100; i++){
        if(i == brb){
            break;
        }
        printf("The value of i is: %d\n",i);
    }
    

    return 0;
}
