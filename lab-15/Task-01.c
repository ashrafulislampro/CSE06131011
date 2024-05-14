#include <stdio.h>

void processElement(int element)
{
    printf("Element = %d\n", element);
};
int main()
{
    int arr[] = {23, 45, 2, 77, 45, 5, 88};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        processElement(arr[i]);
    }
    return 0;
}