#include <stdio.h>
#include <conio.h>
// #include<stdlib.h>
int main()
{
    char c;
    printf("Enter a character :");
    scanf("%c", &c);
    // printf("%d",input);
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) // Checking for Alphabet
    {
        switch (c)
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("\n%c is a vowel.\n", c);
            break;
        default:
            printf("\n%c is a Consonant.\n", c);
            break;
        }
    }
    else // Non Alphabet
        printf("\nInvalid Input\n");
    getch();
    return 0;
}