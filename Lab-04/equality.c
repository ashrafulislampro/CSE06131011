#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter first number : ");
    scanf("%d", &a);

    printf("Enter second number : ");
    scanf("%d", &b);

    if (a == b)
    {
        printf("Two number is equal %d = %d\n", a, b);
    }
    else
    {
        printf("Two number is not equal %d = %d", a, b);
    }

    return 0;
}