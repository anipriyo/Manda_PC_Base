#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    float a = 0, b = 0,max=0;
    int input;
    printf("Enter 2 numbers :");
    input = scanf("%f %f", &a, &b);
    if(input != 2) // Checking if the input is valid or not
    {
        printf("Invalid input.. Try again .\n");
        exit(1);
    }
    if (a == b) // Checking if numbers are same
    {
        printf("both are same");
    }
    else // checking the greater number 
    {
        // if (a > b)
        //     max=a
        // else
        //     max=b
        max=a>b?a:b; 
        printf("%f is greater", max);

    }
    getch();// used to pause the execution of a program until the user enters a key.
    return 0;
}
