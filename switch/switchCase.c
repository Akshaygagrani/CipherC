// Switch-case statements in C
// Syntax:

// switch(expression){
//     case value1:
//                 .....
    
//     case value2:
//                 .....
    
//     case value3:
//                 .....
                
//     default:
//     ..................
// }

#include <stdio.h>

int main()
{
    int dayNum;
    printf("Enter the day number: ");
    scanf("%d", &dayNum);
    
    switch(dayNum){
        case 1:
                printf("\nMonday");
                break;
        
        case 2:
                printf("\nTruesday");
                break;
        
        case 3:
                printf("\nWednesday");
                break;
                
        case 4:
                printf("\nThursday");
                break;
                
        case 5:
                printf("\nFriday");
                break;
        
        case 6:
                printf("\nSaturday");
                break;
                
        case 7:
                printf("\nSunday");
                break;
        
        default:
                printf("\nInvalid number");
    }

    return 0;
}
