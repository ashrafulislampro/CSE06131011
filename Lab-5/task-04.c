#include <stdio.h>

int main()
{
    int month;

    while (1)
    {
        printf("Enter a random 1-12 to get the total days in a month = ");
        scanf("%d", &month);

        switch (month)
        {

        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("Total days of the month is = 31 days\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("Total days of the month is = 30 days\n");
            break;
        case 2:
            printf("Total days of the month is = 28/29 days\n");
            break;

        default:
            printf("Please enter the month number 1-12 \n");
            break;
        }
    }

    return 0;
}