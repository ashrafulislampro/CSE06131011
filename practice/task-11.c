#include <stdio.h>

int main()
{
    int i, num, fac_num = 1;

    while (1)
    {
        printf("Enter a random number to get factorial number : ");
        scanf("%d", &num);

        for (i = 1; i <= num; i++)
        {
            fac_num = fac_num * i;
        }
        printf("The factorial number is %d\n", fac_num);
        fac_num = 1;
    }
    printf("\n");
    return 0;
}
