#include <stdio.h>
#include <conio.h>
#include <math.h>
//#include <stdlib.h>
// #include<string.h>

int main()
{
    float a, b, c, rod; // variable declaration
    printf("\nEnter the Length , breadth and height of the room in meters:");
    while (scanf("%f %f %f", &a, &b, &c) != 3 || (a <= 0 || b <= 0 || c <= 0)) // Input Validation
    {
        printf("Please don't enter characters , negative numbers or 0 ... Try Again : ");
        fflush(stdin); // clearing the input buffer
    }
    rod=sqrt(a*a + b*b + c*c); // length calculation
    printf("The length of the longest rod is : %.3f m",rod);
    getch(); // Hold the program till the user presses a key
    return 0;
}