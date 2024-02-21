#include <stdio.h>

int main()
{
    int integer;
    float floating_point;
    char character;

    printf("Enter an integer number: ");
    scanf("%d", &integer);

    printf("Enter floating point number: ");
    scanf("%f", &floating_point);

    // Clear the input buffer before taking character input
    while (getchar() != '\n')
        ;

    printf("Enter a character: ");
    scanf("%c", &character);

    printf("Print the result: integer = %d, floating point  = %0.2f character = %c\n", integer, floating_point, character);

    return 0;
}