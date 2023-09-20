#include <stdio.h>
#include <conio.h>
// #include<math.h>
//#include <stdlib.h>
// #include<string.h>

int main()
{
    float a,b,c; // variable declaration
    printf("Enter the length of 3 sides of a triangle :");
    while (scanf("%f %f %f",&a,&b,&c) != 3 || (a<=0 || b<=0 || c<=0)) // Checking input validity
    {
        printf("\nPlease Don't enter character , negative number or 0.... Try entering 3 sides again : ");
        fflush(stdin); // clearing input buffer
    }
    if ((a+b)>c && (b+c)>a && (c+a)>b) // checking validity
        printf("\nThe triangle is Valid");
    else
        printf("The triangle is Invalid."); // inavlid triangle
    getch(); // Hold the program till the user presses a key
    return 0;
}