#include <stdio.h>

void twoDimentionalArrEle(int arr[][7], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Element row = %d, col = %d element = %d\n", i, j, arr[i][j]);
        }
    }
};

int main()
{
    int arr[2][7] = {{23, 45, 2, 34, 55, 66, 77}, {2, 4, 6, 8, 9, 1, 7}};
    int row = sizeof(arr) / sizeof(arr[0]);
    int col = sizeof(arr[0]) / sizeof(arr[0][0]);

    twoDimentionalArrEle(arr, row, col);

    return 0;
}