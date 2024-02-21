#include <stdio.h>

int main()
{
    int i;
    printf("enter an integer");

    scanf("%d", &i);

    for (; i; i--)
    {
        printf("%d\n", i);
    }
    return 0;
}