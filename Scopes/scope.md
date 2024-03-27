## Local Scope
```c
#include <stdio.h>

int addNumbers(int number1, int number2) {
  int result = number1 + number2;
  return result;
}

int main() {

  int sum = addNumbers(5, 6);
  printf("Result = %d", sum);

  return 0;
}

```

**Output**
```
Result = 11
```

## Global Scope

```c
#include <stdio.h>

int result;

void addNumbers(int number1, int number2) {
  result = number1 + number2;
}

int main() {

  addNumbers(5, 6);
  printf("Result = %d", result);

  return 0;
}

```
**Output**
```
Result = 11
```

---

## Quiz

Q.  In the following code, which variable is a global variable?
```c
#include <stdio.h>

double discount = 33.3;

int computeFee(int time) {
  double discountAmount;
  double fee = 33600.0;
}

```

**Options:**
1. time 

1. discount

1. fee

1. discountAmount

**Answer: 2**
