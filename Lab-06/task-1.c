#include <stdio.h>

int main()
{
    int num;

    while (1)
    {
        printf("Enter a random number: ");
        scanf("%d", &num);

        if (num > 0)
        {
            printf("%d = is positive Number.\n", num);
        }
        else if (num < 0)
        {
            printf("%d = is negative Number.\n", num);
        }
        else
        {
            printf("%d = is zero.\n", num);
            break;
        }
    }

    return 0;
}