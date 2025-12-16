/*Q3. Masking – Extract Bits
Given a 16-bit register value:
uint16_t reg = 0xABCD;
Perform the following tasks:
1. Extract the lower 4 bits
2. Extract the upper 4 bits of the lower byte
Print the extracted values in hexadecimal format.*/

#include <stdio.h>
#include <stdint.h>

int main()
{
    uint16_t reg = 0xABCD;

    // Extracting th lower 4 bits

    uint16_t mask = 0x000F;
    printf("Extracting lower 4 bits: %x\n", reg & mask);

    // Extracting the upper 4 bits

    printf("Extracting upper 4 bits: %x\n", (reg >> 12) & mask);
}