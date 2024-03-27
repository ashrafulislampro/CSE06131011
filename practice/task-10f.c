#include <stdio.h>

int main()
{
    int i, item1 = 0, item2 = 1, next_item, num;

    printf("Enter a random number to get fibonacci series : ");
    scanf("%d", &num);
    next_item = item1 + item2;

    printf("The fibonacci series is : %d, %d", item1, item2);

    for (i = 3; i <= num; i++)
    {
        printf(", %d", next_item);
        item1 = item2;
        item2 = next_item;
        next_item = item1 + item2;
    }
    printf("\n");
    return 0;
}