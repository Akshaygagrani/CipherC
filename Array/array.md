## Syntax for array declaration

```
datatype arrayName[arraySize];

```
## Assign Value to Array
```c
#include <stdio.h>

int main() {

  int age[5] = {21, 29, 25, 32, 17};

  printf("%d ", age[0]);
  printf("%d ", age[1]);
  printf("%d ", age[2]);
  printf("%d ", age[3]);
  printf("%d ", age[4]);

  return 0;
}

```
**Output**
```
21 29 25 32 17 
```
## Assign Values using index number

```c
#include <stdio.h>

int main() {

  int age[5];

  printf("Enter 5 input values: ");

  scanf("%d", &age[0]);
  scanf("%d", &age[1]);
  scanf("%d", &age[2]);
  scanf("%d", &age[3]);
  scanf("%d", &age[4]);

  printf("%d ", age[0]);
  printf("%d ", age[1]);
  printf("%d ", age[2]);
  printf("%d ", age[3]);
  printf("%d ", age[4]);

  return 0;
}

```
**Output**
```
Enter 5 input values: 21
29
25
32
17
21 29 25 32 17 

```

## Change Array Elements
```c
#include <stdio.h>

int main() {

  int age[5] = {21, 29, 25, 32, 17};

  age[2] = 26;
  printf("%d ", age[2]);

  return 0;
}
```
**Output**
```
26

```

## Loop and Array
```c
#include <stdio.h>

int main() {

  int age[5];

  printf("Enter 5 input values: ");

  for (int i = 0; i < 5; ++i) {
    scanf("%d", &age[i]);
  }

  for (int i = 0; i < 5; ++i) {
    printf("%d ", age[i]);
  }

  return 0;
}
```
**Output**
```
Enter 5 input values: 44
3
53
52
66
44 3 53 52 66 
```

## Index Out of Bound Error
```c
#include <stdio.h>

int main() {

  int age[5];

  printf("Enter 5 input values: ");

  for (int i = 0; i < 5; ++i) {
    scanf("%d", &age[i]);
  }

  for (int i = 0; i < 5 6; ++i) {
    printf("%d ", age[i]);
  }

  return 0;
}

```
**Output**
```
Enter 5 input values: 12
13
14
15
16
12 13 14 15 16 32765 
```
---
## Programming Task
Create a program that computes the average marks of a student.
- Create an array that stores the marks of 5 subjects 
- Compute the total marks by adding all the marks 
- Divide the total marks by total number to subjects
- Print the average marks 

 
## Solution :
```c
#include <stdio.h>

int main() {
    int i;
    double marks[5];
    printf("Enter marks:\n");
    
    for(i = 0; i < 5; i++) {
        scanf("%lf", &marks[i]);
    }
    
    double sum = 0;
    for(i = 0; i < 5; i++) {
        sum = marks[i] + sum;
    }
    
    double avg_marks = sum/5;
    printf("The average marks of a student: %.2lf", avg_marks);
    
    return 0;
}
```
**Output**
```
Enter marks:
50
34
33
23.7
12.1
The average marks of a student: 30.56
```
---
 
## Quiz
 
Q. Which value will we get when we print num[4] from the following array?
```c
int num[5] = {2, 3, 5};
```

**Options:**
1. 2 
1. 5  
1. 0  
1. Random Value


**Answer: 3**

