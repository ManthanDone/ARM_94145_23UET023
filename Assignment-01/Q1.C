#include <stdio.h>
int CountOnes(unsigned int a)
{
    int c = 0;
    while (a)
    {
        (a & 1 == 1) ? c++ : c;
        a >> 1;
    }
}
int main()
{
    unsigned int a;
    printf("Enter an integer :");
    scanf("%d", &a);
    printf("the number of 1's bits is %d", CountOnes(a));
}