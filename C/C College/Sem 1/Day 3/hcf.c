#include <stdio.h>
#include <conio.h>
// #include<math.h>
// #include<stdlib.h>
// #include<string.h>

int main()
{
    float x, y;
    int a, b, r;
    printf("Enter 2 numbers :");
    while (scanf("%f %f", &x, &y) != 2 || (int)x != x || (int)y != y || (y == 0 && x == 0)) // Checking input Validity
    {
        printf("\nInvalid input... Try again : ");
        fflush(stdin); // Clearing input Buffer
    }
    a = (int)x; // typecasting temp variables into integral operation variables
    b = (int)y;

    printf("\nThe inputs are : %d & %d", a, b); // preview
    
    if (a==0)
    {
        printf("\nThe HCF is : %d", b); // HCF Print
    }
    else if (b==0)
    {
        printf("\nThe HCF is : %d", a); // HCF Print
    }
    else
    {
        do
        { // HFC Calculation
            r = a % b;
            a = b;
            b = r;
        } while (r != 0);
        printf("\nThe HCF is : %d", a); // HCF Print
    }

    getch(); // Hold the program till the user presses a key
    return 0;
}