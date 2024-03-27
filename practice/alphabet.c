#include <stdio.h>

int main()
{
    char i, j;

    for (i = 'A'; i <= 'Z'; i++)
    {
        printf("%c ", i);
    }
    printf("\n\n");
    for (j = 'a'; j <= 'z'; j++)
    {
        printf("%c ", j);
    }
    printf("\n\n");
    return 0;
}