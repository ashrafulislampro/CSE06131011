#include <stdio.h>
#include <math.h>

int main()
{
    int x1 = 5, x2 = 2, y1 = 10, y2 = 5;
    float distance;

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("The straight line distance is: %0.2f\n", distance);
    return 0;
}