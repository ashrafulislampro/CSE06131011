#include <stdio.h>

int main()
{
    long myLongVariable;
    long int myIntVariable;
    long double doubleVariable;

    printf("Size of long: %lu bytes\n", sizeof(myLongVariable));
    printf("Size of long: %lu bytes\n", sizeof(myIntVariable));
    printf("Size of long: %lu bytes\n", sizeof(doubleVariable));

    return 0;
}