#include <stdio.h>

int rectangle_area(int b, int h)
{
    return b * h;
}

int main()
{
    int base, height;
    printf("Enter base and height of a Rectangle : ");
    scanf("%d%d", &base, &height);
    int result = rectangle_area(base, height);
    printf("Rectangle Area is : %d\n", result);
    return 0;
}