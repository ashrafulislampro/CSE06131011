#include <stdio.h>

int main()
{
    int i, sum = 0;
    for (i = 1; i <= 100; i += 2)
    {
        sum = sum + i;
    }
    printf("Between 0-100 Odd Numbers Summation is = %d\n", sum);
    return 0;
}