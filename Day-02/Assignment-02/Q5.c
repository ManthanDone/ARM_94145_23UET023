/*Q5. Read and Write Bit Field
Given an 8-bit register:
uint8_t reg = 0xAA;   // 1010 1010
1. Read the value of bits from bit 2 to bit 4
2. Write the value 0b011 into bits 2 to 4 without changing other bits
Print the register value before and after modification*/

#include <stdio.h>
#include <stdint.h>
#define BV(n) (1 << n)
void PrintBin(unsigned int a)
{
    int sp = 0;
    for (int i = 7; i >= 0; i--)
    {
        if (sp == 4)
        {
            printf(" ");
            sp = 0;
        }
        printf("%d", ((a >> i) & 1));
        sp++;
    }
}
int main()
{
    uint8_t reg = 0xAA;
    uint8_t mask = 0x07;
    printf("Extracting bits from bit 2 to bit 4: %x\n", (reg >> 2) & mask);
    PrintBin((reg >> 2) & mask);

    // writing 011 at bits 2 to 4
    // clearing 4th bit                  0
    uint8_t val = reg & ~(BV(4));

    // setting 3rd bit                   1
    val |= BV(3);

    // setting 3rd bit                   1
    val |= BV(2);

    printf("\nAfter writing 3'b011 to bits 2 to 4:%x\n", val);
    PrintBin(val);
}