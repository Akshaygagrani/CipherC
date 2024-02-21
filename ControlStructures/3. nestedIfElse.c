3//Example of  Nested If..Else

#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool father = false;
    bool mother = false;
    
    if(father){
        // Father of Aakash has agreed for him to go to GOA....
        if(mother){
            // Father as well as agreed of Aakash has agreed for him to go to GOA
            printf("Yipeee GOA is on guys !!!!");
        }else{
            // When Father has agreed but mother has disagreed
            printf("Sorry Guys let's plan some other time");
        }
    }else{
        // Father has disagreed 
        printf("Sorry Guys My father has disagreed for this");
    }
    
    return 0;
}
