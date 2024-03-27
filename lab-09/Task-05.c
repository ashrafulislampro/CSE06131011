#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    printf("Enter a temperature in celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (9 * celsius) / 5 + 32;

    printf("Tempareture in fahrenheit is = %0.2f\n", fahrenheit);

    return 0;
}