// BIT WISE operator

// & Bitwise AND
// | Bitwise OR
// ^ Bitwise XOR
// ~ Bitwise complement
// << Shift left
// >> Shift Right

12 = 00001100 (In Binary)
25 = 00011001 (In Binary)

// Bit Operation => &
//   12
// & 25 

  00001100
& 00011001
-------------
  00001000  = 8 (In decimal)

// Bit Operation => |
  00001100
| 00011001
-------------
  00011101  = 29 (In decimal)
  
// Bit Operation => ^
  00001100
^ 00011001
-------------
  00010101  = 21 (In decimal)
  
 
 
 Let's assume a binary number as
 
a = 11010100 

Right Shift Opeartor -> a/2^n wheren = no of bits by which shifted 
(a >> 2): 00110101
(a >> 3): 00011010


Left Shift Opeartor 
(a << 1): 10101000
(a >> 2): 01010000

  
#include <stdio.h>

int main()
{
    printf("Hello World");

    return 0;
}
