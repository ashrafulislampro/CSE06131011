#include <stdio.h>

int main()
{
    int i, sum = 0;

    for (i = 1; i <= 500; i++)
    {
        if (i % 7 == 0 && i % 9 == 0)
        {
            sum += i;
        }
    }
    printf("Sum of number that are multiples both 7 and 9 up to 500 : %d\n", sum);
    return 0;
}