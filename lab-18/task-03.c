#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}
int main()
{
    int num1 = 10, num2 = 15;

    printf("Before Swap is = %d %d\n", num1, num2);
    swap(&num1, &num2);

    printf("After Swap is = %d %d\n", num1, num2);
    return 0;
}