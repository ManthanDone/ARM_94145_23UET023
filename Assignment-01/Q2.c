#include <stdio.h>
void PrintBin(unsigned int a)
{
    for (int i = 31; i >= 0; i--)
    {
        printf("%d", ((a >> i) & 1));
    }
}
int main()
{
    unsigned int a;
    printf("Enter an integer :");
    scanf("%d", &a);
    PrintBin(a);
}