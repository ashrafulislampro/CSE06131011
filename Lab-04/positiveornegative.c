#include <stdio.h>

int main()
{
    int a;

    printf("Enter a number : ");
    scanf("%d", &a);

    if (a > 0)
    {
        printf("Enter number is positive %d\n", a);
    }
    else
    {
        printf("Enter number is negative %d\n", a);
    }

    return 0;
}