#include <stdio.h>

int main()
{
    int num = 10;
    int *ptr = &num;

    printf("%p = %d\n", ptr, *ptr);
    return 0;
}