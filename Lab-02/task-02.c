#include <stdio.h>

int main()
{
    float floating_point_1, floating_point_2, multiply;

    printf("Enter a first floating number = ");
    scanf("%f", &floating_point_1);

    printf("Enter a second floating number = ");
    scanf("%f", &floating_point_2);

    multiply = floating_point_1 * floating_point_2;

    printf("Result of the Multiplication = %0.2f\n", multiply);

    return 0;
}