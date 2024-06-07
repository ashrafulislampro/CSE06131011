#include <stdio.h>
#include <string.h>

void twodimentionalArr(int arr[2][6], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Row = %d, Col = %d and Element = %d\n", i + 1, j + 1, arr[i][j]);
        }
    }
}

int main()
{
    int row, col;
    int arr[2][6] = {
        {3, 5, 7, 9, 10, 4},
        {33, 55, 77, 99, 100, 44},
    };
    row = sizeof(arr) / sizeof(arr[0]);
    col = sizeof(arr[0]) / sizeof(arr[0][0]);
    printf("%d , %d\n", row, col);
    twodimentionalArr(arr, row, col);
    return 0;
}