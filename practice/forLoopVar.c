#include <stdio.h>

int main()
{

    char ch;

    for (scanf("%c", &ch); ch != 'q'; scanf("%c", &ch))
        ;

    printf("Found the q");

    return 0;
}