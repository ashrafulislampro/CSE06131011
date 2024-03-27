#include <stdio.h>

int main()
{
    int i;
    printf("1. ");

    for (i = 24; i >= -6; i -= 6)
    {
        if (i != -6)
        {
            printf("%d, ", i);
        }
        else
        {
            printf("%d\n", i);
        }
    }

    printf("2. ");
    for (i = -10; i <= 20; i += 5)
    {
        if (i != 20)
        {
            printf("%d, ", i);
        }
        else
        {
            printf("%d\n", i);
        }
    }

    printf("3. ");
    for (i = 18; i <= 63; i += 9)
    {
        if (i != 63)
        {
            printf("%d, ", i);
        }
        else
        {
            printf("%d\n", i);
        }
    }

    printf("4. ");
    for (i = 18; i <= 63; i += 9)
    {
        if (i != 63)
        {
            if (i % 2 == 0)
            {
                printf("%d, ", i);
            }
            else
            {
                printf("-%d, ", i);
            }
        }
        else
        {
            printf("-%d\n", i);
        }
    }
    return 0;
}