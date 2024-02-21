#include <stdio.h>

int main()
{
    int a;

    printf("Enter a number : ");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("Enter number is Even %d\n", a);
    }
    else
    {
        printf("Enter number is Odd %d\n", a);
    }

    return 0;
}