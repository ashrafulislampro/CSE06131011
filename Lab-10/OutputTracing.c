#include <stdio.h>

int main()

{
    int num;

    while (1)
    {
        printf("Enter a random number 0-100 : ");
        scanf("%d", &num);
        if (0 <= num && num <= 100)
        {
            switch (num)
            {
            case 80 ... 100:
                printf("Grade is A+\n");
                break;
            case 70 ... 79:
                printf("Grade is A\n");
                break;
            case 60 ... 69:
                printf("Grade is A-\n");
                break;
            case 50 ... 59:
                printf("Grade is B\n");
                break;
            case 40 ... 49:
                printf("Grade is C\n");
                break;
            default:
                printf("Grade is F\n");
            }
        }
        else
        {
            printf("Please enter a number between 0 and 100\n");
            break;
        }
    }

    return 0;
}