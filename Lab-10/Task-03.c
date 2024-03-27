#include <stdio.h>

int main()
{
    // Sequence 1: 24, 18, 12, 6, 0, -6
    printf("Sequence 1: ");
    for (int i = 24; i >= -6; i -= 6)
    {
        printf("%d ", i);
    }
    printf("\n");

    // Sequence 2: -10, -5, 0, 5, 10, 15, 20
    printf("Sequence 2: ");
    for (int i = -10; i <= 20; i += 5)
    {
        printf("%d ", i);
    }
    printf("\n");

    // Sequence 3: 18, 27, 36, 45, 54, 63
    printf("Sequence 3: ");
    for (int i = 18; i <= 63; i += 9)
    {
        printf("%d ", i);
    }
    printf("\n");

    // Sequence 4: 18, -27, 36, -45, 54, -63
    printf("Sequence 4: ");
    for (int i = 18, sign = 1; i <= 63; i += 9, sign *= -1)
    {
        printf("%d ", i * sign);
    }
    printf("\n");

    return 0;
}