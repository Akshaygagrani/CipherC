// Leap Year Question - Whether a given year is a leap year or not

// Condition for a year to be a leap year -:
// - Year is perfectly divisible by 400 => Leap Year
// - Year is not divisible by 100 but it's divisible by 4 => Leap Year


#include <stdio.h>

int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    
    if(year % 400 == 0){
        printf("%d is a leap year since divisible by 400", year);
    }
    else if( (year % 100 !=0) && (year % 4 == 0)){
        printf("%d is a leap year", year);
    }
    else{
        printf("%d is NOT a leap year at all", year);
    }

    return 0;
}
