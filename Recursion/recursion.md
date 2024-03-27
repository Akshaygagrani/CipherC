## Example: C Recursion

```c
#include <stdio.h>
int sum(int n);

int main() {
    int number, result;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    result = sum(number);

    printf("sum = %d", result);
    return 0;
}

int sum(int n) {
    if (n != 0) {
        // sum() function calls itself
        return n + sum(n-1); 
    }  
    else {
        return n;
    }
}

```
 
**Output**
```
Enter a positive integer: 4
sum = 10

```
 

---
## Programming Task
Create a program that computes the factorial of a number.  
- Take an input number from the user 
- Create a function that takes the number as a parameter. 
- Inside the function check if the number is greater than 0.
- If true, return number multiplied by a recursive call to the function with parameter 1 less than number  
- Else, return 1
 
## Solution :
```c
#include <stdio.h>

int fact (int n);

int main() {
    
    int number;
    printf("Enter any number: ");
    scanf("%d", &number);
    
    if(number > 0) {
        int result = fact(number);
        printf("The Factorial is : %d", result);
    }
    else {
        printf("Enter positive value");
    }
    
    return 0;
}

int fact (int n) {
    
    if(n == 1 || n==0) {
        return 1;
    }
    else {
        return n * fact(n-1);
    }
    
}

```
**Output**
```
Enter any number: 7
The Factorial is : 5040
```
---
 
## Quiz
 
Q. Which of the following statements is false?

**Options:**
1. A function that calls itself is called recursive function  
1. Conditional statement prevents infinite recursive call  
1. Recursive Function always return some value  
1. None of the above

**Answer: 3**
