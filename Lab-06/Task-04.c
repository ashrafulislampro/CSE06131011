#include <stdio.h>

int main()
{
    char character;

    printf("Enter a random character: ");
    scanf("%c", &character);

    if (character == 'a' || character == 'A' || character == 'e' || character == 'E' || character == 'i' || character == 'I' || character == 'o' || character == 'O' || character == 'u' || character == 'U')
    {
        printf("'%c' = the character is vowel.\n", character);
    }
    else
    {
        printf("'%c' = the character is consonant.\n", character);
    }

    return 0;
}