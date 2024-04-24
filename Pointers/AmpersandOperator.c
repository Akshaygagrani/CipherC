// We have used this adderess (&) numerous times when we use the 
// scanf function to store the value at particular adderess

#include <stdio.h>

int main()
{
    int var;
    printf("Enter the value of var: ");
    scanf("%d", &var);
    
    printf("Value of var is: %d\n", var);
    
    // & (ampersand) sign gives you the address of the variable
    printf("Address of variable var is : %x", &var);
    
    // Print the addresses -> %p, %x, %u
    // 0x7ffebaa931d4
    // 0x7fff4dc1f254
    
    return 0;
}
