#include <stdio.h>
#include <conio.h>
//#include <stdlib.h>

int main()
{
    int month;
    float input;
    start: printf("Enter the Month Index Number (1-12) : "); // there is a start declaration for goto
    while (scanf("%f", &input) != 1 || (int)input!=input ) // Input validation
    {
        printf("\nWrong Input. Try to not enter a character or Float again ... Input again :");
        fflush(stdin);// clearing the input buffer
    }
    month=(int)input; // typecasting to integer value
    switch (month) // Month Selection via Switch Case
    {
    case 1:
        printf("\nThe month is January.");
        break;
    case 2:
        printf("\nThe month is February.");
        break;
    case 3:
        printf("\nThe month is March.");
        break;
    case 4:
        printf("\nThe month is April.");
        break;
    case 5:
        printf("\nThe month is May.");
        break;
    case 6:
        printf("\nThe month is June.");
        break;
    case 7:
        printf("\nThe month is July.");
        break;
    case 8:
        printf("\nThe month is August.");
        break;
    case 9:
        printf("\nThe month is September.");
        break;
    case 10:
        printf("\nThe month is October.");
        break;
    case 11:
        printf("\nThe month is November.");
        break;
    case 12:
        printf("\nThe month is December.");
        break;

    default: //Invalid input 
        {
            printf("\nThere are only 12 months. Try entering (1-12) Again....");
            fflush(stdin);
            goto start; // rewinds the program to start
        }
        break;
    }

    getch(); // Hold the program till the user presses a key
    return 0;
}