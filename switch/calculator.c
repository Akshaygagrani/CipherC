// Calculator using if..else
#include <stdio.h>

int main()
{
    // the to be taken for switch
    int n1, n2;
    
    char operation;
    
    printf("Enter an operator: ");
    scanf("%c", &operation);
    
    
    printf("Enter the two operads ");
    scanf("%d %d", &n1, &n2);
    
    
    switch(operation){
        case '+':
            printf("Addition : %d + %d = %d", n1, n2, n1+n2);
            break;
        
        case '-':
            printf("Subtract : %d - %d = %d", n1, n2, n1-n2);
            break;

        case '/':
            printf("Division : %d / %d = %d", n1, n2, n1/n2);
            break;
            
        case '*':
            printf("Multiplication : %d * %d = %d", n1, n2, n2*n1);
            break;
            
        default:
            printf("Error !! Found");
    }

    return 0;
}
