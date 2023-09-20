#include<stdio.h>
#include <conio.h>
int main()
{
    char c;
    printf("Enter a character :");
    scanf("%c",&c);
    if (c>='A' && c<='Z')
    {
        printf("\n%c is in uppercase",c);
        c+=('a'-'A');
        printf("\nThe converted case is :%c\n",c);
    }
    else if (c>='a' && c<='z')
    {
        printf("\n%c is in lowercase",c);
        c-=('a'-'A');
        printf("\nThe converted case is :%c\n",c);
    }
    else
    {
        printf("\nInvalid Input\n");
    }
    getch();// used to pause the execution of a program until the user enters a key.
    return 0;
}