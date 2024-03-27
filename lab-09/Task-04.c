#include <stdio.h>
#include <string.h>

int main()
{

    char str1[] = "Hello World";
    char str2[] = "Hello Worl";
    char fullName[30];

    fgets(fullName, sizeof(fullName), stdin);

    printf("%s\n", fullName);

    // strcpy(str2, str1);
    // printf("%s\n", str2);

    // char str1[20] = "Hello";
    // char str2[] = "World";
    // strcat(str1, str2);
    // printf("%s\n", str1);

    // int matrix[2][3] = {{1, 4, 2}, {3, 6, 8}};
    // char strs[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    // printf("%lu\n", strlen(strs));
    // printf("%lu\n", sizeof(strs));

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("%d ~ %d = %d\n", i, j, matrix[i][j]);
    //     }
    // }

    // int radius;
    // float area;

    // printf("Enter the radius of a circle: ");
    // scanf("%d", &radius);

    // area = 3.1416 * radius * radius;

    // printf("Area of a circle = %0.2f\n", area);

    return 0;
}