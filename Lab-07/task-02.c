#include <stdio.h>

int main()
{
    char lowercase, uppercase;

    printf("print all lowercase alphabetic characters\n");

    for (lowercase = 'a'; lowercase <= 'z'; ++lowercase)
    {
        printf("%c ", lowercase);
    }

    printf("\n\nprint all uppercase alphabetic characters\n");

    for (uppercase = 'A'; uppercase <= 'Z'; ++uppercase)
    {
        printf("%c ", uppercase);
    }

    return 0;
}