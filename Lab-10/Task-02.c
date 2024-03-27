#include <stdio.h>

int main()
{
    int i, num, nextItem, item1 = 0, item2 = 1;

    printf("Enter a number for fibonacci series: ");
    scanf("%d", &num);

    nextItem = item1 + item2;
    printf("Fibonacci Series: %d, %d", item1, item2);

    for (i = 3; i <= num; i++)
    {

        printf(", %d", nextItem);
        item1 = item2;
        item2 = nextItem;
        nextItem = item1 + item2;
    }
    printf("\n");
    return 0;
}