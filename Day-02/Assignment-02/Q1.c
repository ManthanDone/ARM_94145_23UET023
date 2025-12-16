/*Q1. Set, Clear and Toggle a Bit
Given an 8-bit unsigned variable:
uint8_t reg = 0x2A;   // 0010 1010
Perform the following operations using bitwise operators:
1. Set bit number 4
2. Clear bit number 1
3. Toggle bit number 5
Print the value of reg in hexadecimal and binary after each operation.*/

#include <stdio.h>
#include <stdint.h>
#define BV(n) (1 << (n))
int main()
{
    uint8_t reg = 0x2A;
    printf("Original number :%x ", reg);

    // Setting 4th bit
    printf("After setting 4th bit:%x \n", (reg | BV(4)));

    // clearing first bit
    printf("After clearing 1st bit:%x \n", (reg & ~(BV(1))));

    // Toggle 5th bit
    printf("After Toggling 5th bit:%x \n", (reg ^ BV(5)));
}