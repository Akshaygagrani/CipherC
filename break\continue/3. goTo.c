// GoTo Statements -: Also known as Jump statement which is also referred as (uncoditional jump) statement

// Disadvantages of goTo statement:
// - It makes the program logic very complex
// - It makes the tracing of the flow very difficult
//  - The use of the goTo can easily be avoided with function calls/continue/break statements

#include <stdio.h>


int main()
{
    int num = 35;
    
    if(num%2 == 0){
        goto even;
    }else{
        goto odd;
    }
    
    printf("I am the best\n");
    
even:
    printf("%d is even number", num);
    return 0;
    
odd:
    printf("%d is odd number", num);
    return 0;
    
    return 0;
}
