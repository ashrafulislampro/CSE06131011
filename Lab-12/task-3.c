#include <stdio.h>
#include <string.h>

#define max_len 30
void palindrome_num(char num[])
{
    int i, j = 0, count = 0;
    char num2[max_len];
    int len = strlen(num);

    // Removing newline characters from num;
    if (num[len - 1] == '\n')
    {
        num[--len] = '\0';
    }

    for (i = len - 1; i >= 0; i--)
    {
        num2[j] = num[i];
        j++;
    }

    num2[j] = '\0'; // terminate num2 with null;

    // Comparing two number is palindrome or not.
    if (strcmp(num, num2) == 0)
    {
        printf("The %s Number is Palindrome\n", num2);
    }
    else
    {
        printf("The %s Number is not Palindrome\n", num2);
    }
}

int main()
{
    char num[max_len];
    printf("Enter a number is palindrome or not : ");
    fgets(num, max_len, stdin);

    palindrome_num(num);
    return 0;
}