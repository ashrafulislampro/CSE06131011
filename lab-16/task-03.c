#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Hello", str2[] = "Hello", str3[] = "World";

    if (strcmp(str1, str3) == 0)
    {
        printf("There two string are equal!\n");
    }
    else
    {
        printf("There two string are not equal!\n");
    }
    return 0;
}