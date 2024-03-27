#include <stdio.h>

int main()
{
    int num, i, value = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        value = value * i;
    }
    printf("%d Factorial Number Equal to %d\n", num, value);
    return 0;
}