#include <stdio.h>

long fibonacci(long n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        printf("=%6ld\n", n);
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int i, num = 10;
    for (i = 0; i < num; i++)
    {
        printf("%ld ", fibonacci(i));
    }

    return 0;
}