#include <stdio.h>

int main()
{
    int year;

    while (1)
    {
        printf("Enter a random year: ");
        scanf("%d", &year);

        if (year % 4 == 0)
        {
            printf("%d = is a leap year.\n", year);
        }
        else
        {
            printf("%d = is not a leap year.\n", year);
        }
    }

    return 0;
}