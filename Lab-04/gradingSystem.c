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

        if (80 <= grade && 100 >= grade)
        {
            printf("Grade is A+\n");
        }
        else if (75 <= grade && 79 >= grade)
        {
            printf("Grade is A\n");
        }
        else if (70 <= grade && 74 >= grade)
        {
            printf("Grade is A-\n");
        }
        else if (65 <= grade && 69 >= grade)
        {
            printf("Grade is B+\n");
        }
        else if (60 <= grade && 64 >= grade)
        {
            printf("Grade is B\n");
        }
        else if (55 <= grade && 59 >= grade)
        {
            printf("Grade is B-\n");
        }
        else if (50 <= grade && 54 >= grade)
        {
            printf("Grade is C+\n");
        }
        else if (45 <= grade && 49 >= grade)
        {
            printf("Grade is C\n");
        }
        else if (40 <= grade && 44 >= grade)
        {
            printf("Grade is D\n");
        }
        else
        {
            printf("Grade is F\n");
        }
    }

    return 0;
}