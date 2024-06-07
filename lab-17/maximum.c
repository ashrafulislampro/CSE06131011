#include <stdio.h>

int main()
{
    int num1, num2, num3;
    num1 = 7;
    num2 = 6;
    num3 = 3;

    if (num1 > num2 && num1 > num3)
    {
        printf("Maximum number is %d\n", num1);
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("Maximum number is %d\n", num2);
    }
    else
    {
        printf("Maximum number is %d\n", num3);
    }
    return 0;
}