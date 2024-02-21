#include <stdio.h>

int main()
{
    int num;

    while (1)
    {
        printf("Enter Number for Male 1 or Female 2 == ");
        scanf("%d", &num);

        switch (num)
        {

        case 1:
            printf("Gender is Male\n");
            break;
        case 2:
            printf("Gender is female\n");
            break;

        default:
            printf("Please enter the number 1-2 \n");
            break;
        }
    }

    return 0;
}