#include <stdio.h>

int main()
{
    int dividend = 105, divisor = 10, quotient, remainder;

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    printf("Result of the quotient = %d and remainder = %d\n", quotient, remainder);

    return 0;
}