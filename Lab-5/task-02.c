#include <stdio.h>

int main()
{
    int grade;

    while (1)
    {
        printf("Enter a random number : ");
        scanf("%d", &grade);

        if (grade <= 0)
        {
            printf("Exiting the program. :\n");
            break;
        }

        switch (grade)
        {

        case 80 ... 100:
            printf("Grade is A+\n");
            break;

        case 75 ... 79:
            printf("Grade is A\n");
            break;
        case 70 ... 74:
            printf("Grade is A-\n");
            break;
        case 65 ... 69:
            printf("Grade is B+\n");
            break;
        case 60 ... 64:
            printf("Grade is B\n");
            break;
        case 55 ... 59:
            printf("Grade is B-\n");
            break;
        case 50 ... 54:
            printf("Grade is C+\n");
            break;
        case 45 ... 49:
            printf("Grade is C\n");
            break;
        case 40 ... 44:
            printf("Grade is D\n");
            break;
        default:
            printf("Grade is F\n");
            break;
        }
    }

    return 0;
}