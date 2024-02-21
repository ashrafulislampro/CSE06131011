#include <stdio.h>

int main()
{
    int day;

    while (1)
    {
        printf("Enter a random number 0-6 to get the week day = ");
        scanf("%d", &day);

        switch (day)
        {

        case 0:
            printf("%d = day of Sunday\n", day);
            break;
        case 1:
            printf("%d = day of Monday\n", day);
            break;
        case 2:
            printf("%d = day of Tuesday\n", day);
            break;
        case 3:
            printf("%d = day of Wednesday\n", day);
            break;
        case 4:
            printf("%d = day of Thursday\n", day);
            break;
        case 5:
            printf("%d = day of Friday\n", day);
            break;
        case 6:
            printf("%d = day of Saturday\n", day);
            break;

        default:
            printf("Please enter number of range 0-6 \n");
            break;
        }
    }

    return 0;
}
