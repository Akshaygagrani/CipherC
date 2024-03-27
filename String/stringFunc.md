## C String 

```c
#include <stdio.h>

int main() {

  char language[] = "C Cipher";
  
  printf("%s", language);

  return 0;
}
```
**Output**
```
C Cipher
```

## 1. strlen() Function
```c
#include <stdio.h>
#include <string.h>

int main() {

  char language[] = "C Cipher";
  
  printf("%s", language);

  printf("\nLength: %zu", strlen(language));

  return 0;
}
```
**Output**
```
C Cipher
Length: 8

```
## 2. strcpy() Function

```c
#include <stdio.h>
#include <string.h>

int main() {
  char food[] = "Pizza";

  char bestFood[strlen(food)];

  strcpy(bestFood, food);

  printf("%s", bestFood);

  return 0;
}
```
**Output**
```
Pizza
```

## 3. strcat() Function
```c
#include <stdio.h>
#include <string.h>

int main() {

  char text1[] = "Hey, ";
  char text2[] = "How are you?";
  
  strcat(text1, text2);

  printf("%s", text1);

  return 0;
}

```
**Output**
```
Hey, How are you?
```
## 4. strcmp() Function
```c
#include <stdio.h>
#include <string.h>

int main() {

  char text1[] = "abcd";
  char text2[] = "cdef";
  
  int result = strcmp(text1, text2);

  printf("%d", result);

  return 0;
}

```
**Output**
```
-2
```


## Task
Create a program to compare two strings and print the larger strings.Here is how the program should work:  
- Get two string input from the user using fgets()
- Compare the length of both the strings using strlen()  
- Print the larger string

**Solution**
```c
#include <stdio.h>
#include <string.h>

int main() {

  char food1[20];
  char food2[20];
  
  printf("Enter the first food: ");
  fgets(food1, sizeof(food1), stdin);
  
  printf("Enter the second food: ");
  fgets(food2, sizeof(food2), stdin);
  
  if (strlen(food1) > strlen(food2)) {
      printf("Longest Food Name: %s", food1);
  }
  else {
      printf("Longest Food Name: %s\n", food2);
  }
  
  return 0;
}
```

**Output**
```
Enter the first food: Coffee
Enter the second food: Tea
Longest Food Name: Coffee
Length: 7

```
---
 
## Programiz Quiz
 
Q.  Which of the following functions is used to join two strings?


**Options:**
1. strjoin()
1. strcat()
1. join()
1. cat()


**Answer: 2**
