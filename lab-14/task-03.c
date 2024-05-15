#include <stdio.h>

int main()
{
    int i, arr[10], num, sum = 0;
    int size = sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    printf("Average of inputs of an array element =  %.2f\n", sum * 1.0 / size);

    return 0;
}