#include <stdio.h>

int main()
{
    int i, arr[] = {34, 56, 23, 9, 33, 23};
    int size = sizeof(arr) / sizeof(arr[1]);
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}