#include <stdio.h>

int main()
{
    int a, b, c;

    a = 5;

    while (a > 2)
    {
        for (b = a; b < 2 * a; b++)
        {
            c = a + b;
            if (c < 8)
                continue;
            if (c > 11)
                break;

            printf("a = %d, b = %d, c = %d\n", a, b, c);
            printf("a = %d, b = %d, c = %d\n", a, b, c);
        }
        a--;
    }

    return 0;
}