#include <stdio.h>
#include <math.h>
int EvenParity(unsigned int a)
{
    int c = 0;
    while (a)
    {
        (a & 1 == 1) ? c++ : c;
        a >>= 1;
    }
    return c % 2;
}
int main()
{
    unsigned int a;
    printf("Enter an integer :");
    scanf("%d", &a);
    if (EvenParity(a))
    {
        printf("Odd Parity\n");
        printf("%u is the number after setting the msb\n", (a | 0x80000000));
    }
    else
        printf("Even Parity no need to set the MSB\n");
    return 0;
}