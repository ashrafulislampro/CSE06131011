#include <stdio.h>

int main()
{
    goto mylabel;
    printf("This will not print");
mylabel:
    printf("This will print.");
    return 0;
}