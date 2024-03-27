#include <stdio.h>

int main()
{
    int i, sum = 0, num;
    float avrg;

    for (i = 1; i <= 10; i++)
    {
        printf("Number-%d : ", i);
        scanf("%d", &num);

        sum += num;
    }
    printf("The sum of 10 no is: %d\n", sum);
    avrg = sum / 10;

    printf("The Average is: %0.2f\n", avrg);
    return 0;
}