/*Q4. Left Shift and Right Shift
Write a C program to demonstrate left shift and right shift operations.
uint8_t value = 5;
1. Left shift the value by 2 positions
2. Right shift the original value by 1 position
Print the result after each operation.
Explain how left shift and right shift are related to multiplication and division by powers of 2.*/

#include <stdio.h>
#include <stdint.h>
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
    uint8_t num = 0xFC;

    printf("Original Value : ");
    PrintBin(num);

    printf("\n Value after left shifting twice: ");
    PrintBin(num << 2);

    printf("\n Value after right shifting once: ");
    PrintBin(num >> 1);
}