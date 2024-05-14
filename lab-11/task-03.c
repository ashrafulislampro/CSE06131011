#include <stdio.h>
#include <string.h>

#define max_len 20

int main()
{
    int i, len, count = 0;
    char num[max_len];

    printf("Enter a number : ");
    fgets(num, max_len, stdin);

    len = strlen(num);

    for (i = 0; i < len - 1; i++)
    {
        count++;
    }

    printf("Count Number of Digit in an Integer : %d\n", count);

    return 0;
}
