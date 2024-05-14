#include <stdio.h>

float average_val(int num1, int num2, int num3)
{
    float avrg = (float)num1 + (float)num2 + (float)num3;
    return avrg / 3;
}

int main()
{
    int num1 = 10, num2 = 5, num3 = 20;

    float result = average_val(num1, num2, num3);
    printf("Average of three numbers : %0.2f\n", result);
    return 0;
}