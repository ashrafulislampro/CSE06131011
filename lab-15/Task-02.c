#include <stdio.h>
#include <string.h>

int arrSumElement(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
};

int main()
{
    int arr[] = {23, 45, 2, 77, 45, 5, 88};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = arrSumElement(arr, size);
    printf("Summation of array element = %d\n", result);
    return 0;
}