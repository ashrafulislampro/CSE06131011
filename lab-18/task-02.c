#include <stdio.h>

int main()
{
    int num1 = 10, num2 = 15;
    int *ptr = &num1;
    int *ptr2 = &num2;

    printf("Sum is = %d\n", *ptr2 + *ptr);
    return 0;
}