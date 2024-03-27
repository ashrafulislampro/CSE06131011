#include <stdio.h>

int main()
{
    int i, item1 = 0, item2 = 1, next_item, num;

    while (1)
    {
        printf("Enter a number to get Fabonacci Series: ");
        scanf("%d", &num);

        next_item = item1 + item2;

        printf("The Fabonacci Series is : %d, %d", item1, item2);

        for (i = 3; i <= num; i++)
        {
            printf(", %d", next_item);
            item1 = item2;
            item2 = next_item;
            next_item = item1 + item2;
        }
        item1 = 0;
        item2 = 1;
        printf("\n");
    }
    printf("\n");
    return 0;
}
