#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    float a=0, b=0, c=0, max = 0;
    int input=0;
    printf("Enter 3 numbers :");
    input=scanf("%f %f %f", &a, &b, &c);
    if (input != 3)// Checking if the input is valid or not
    {
        printf("Invalid input.. Try again .\n");
        exit(1);
    }
    if (a == b && a == c)
        printf("The numbers are equal");
    else
    {
        if (a >= b)
        {
            if (a >= c)
                max = a;
            else
                max = c;
        }
        else if (b >= a)
        {
            if (b >= c)
                max = b;
            else
                max = c;
        }
        // max=(a>=b && a>=c)?a:(b>=c?b:c);
        printf("The greatest number is %f", max);
    }
    getch();// used to pause the execution of a program until the user enters a key.
    return 0;
}
