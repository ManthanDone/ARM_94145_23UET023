#include <stdio.h>
int EvenParity(unsigned int a)
{
    int c = 0;
    while (a)
    {
        (a & 1 == 1) ? c++ : c;
        a >>= 1;
    }
    return c%2 ;
}
int main()
{
    unsigned int a;
    printf("Enter an integer :");
    scanf("%d", &a);
    if(EvenParity(a)){
        printf("Odd Parity");
    }
    else 
        printf("Even Parity");
    return 0;
}