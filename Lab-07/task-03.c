#include <stdio.h>

int main()
{
    int num, sum = 0;

    for (num = 1; num < 100; num += 2)
    {
        sum += num;
    }
    printf("Summation %d = \n", sum);

    return 0;
}