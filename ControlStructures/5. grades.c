// Flow Control:

// marks
//     from 85 to= 100: A
//     from 65 to= 85 : B+
//     from 45 to= 65 : B
//     from 25 to= 55 : C
//     from <= 25     : Fail
    
#include <stdio.h>

int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    
    if(marks>85 && marks<= 100){
        printf("Congrats !! you nailed it: A grade");
    }else if(marks > 65 && marks <= 85){
        printf("Congratulations !! you got : B+ grade");
    }
    else if(marks > 45 && marks <= 65){
        printf("Try for better grades next time  !! you got : B grade");
    }
    else if(marks > 25 && marks <= 45){
        printf("You seriously need to improve next time  !! you got : C grade");
    }else if(marks >=0 && marks <= 25){
       printf("Let's see you in the next exam as well  !! you got : Failed!!"); 
    }else{
        printf("Invalid marks given");
    }
    
    return 0;
}
