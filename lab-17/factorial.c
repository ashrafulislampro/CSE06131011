#include <stdio.h>

int factorial(int n)
{
    int t;
    if (n <= 1)
    {
        t = 1;
    }
    else
    {
        t = n * factorial(n - 1);
        // printf("%d %d\n", t, n);
    }
    return t;
}
int main()
{
    int num = 4;
    int result = factorial(num);
    printf("%d\n", result);
    return 0;
}
