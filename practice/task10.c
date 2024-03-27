#include <stdio.h>

int main()
{
    int i, num, fac_val = 1;

    while (1)
    {
        printf("Enter a random number : ");
        scanf("%d", &num);

        for (i = 1; i <= num; i++)
        {
            fac_val = fac_val * i;
        }
        printf("The factorial Number is : %d\n", fac_val);
        fac_val = 1;
    }

    return 0;
}