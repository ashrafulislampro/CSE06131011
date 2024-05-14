#include <stdio.h>
#include <string.h>
#define max_size 20
int main()
{
    char num[max_size];
    printf("Enter a number : ");
    fgets(num, max_size, stdin);
    int i, len = strlen(num);

    for (i = len - 1; i >= 0; i--)
    {
        printf("%c", num[i]);
    }
    printf("\n\n");
    return 0;
}