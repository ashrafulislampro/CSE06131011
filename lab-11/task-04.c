#include <stdio.h>
#include <string.h>
#define max_len 30

int main()
{
    char num[max_len];
    char num2[max_len];
    int i, len, j = 0;

    printf("Enter a number : ");
    fgets(num, max_len, stdin);
    len = strlen(num);

    // Removing newline character from num
    if (num[len - 1] == '\n')
    {
        num[--len] = '\0';
    }

    for (i = len - 1; i >= 0; i--)
    {
        num2[j] = num[i];
        j++;
    }

    num2[j] = '\0'; // NULL terminate num2

    // Comparing the original and reversed number
    if (strcmp(num, num2) == 0)
    {
        printf("The number is palindrome!\n");
    }
    else
    {
        printf("The number is not palindrome!\n");
    }

    return 0;
}