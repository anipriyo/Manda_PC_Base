#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    float percentage;
    int input=0;
    printf("Enter the total percentage : ");
    input=scanf("%f", &percentage);
    if (input != 1) // Checking if the input is valid or not
    {
        printf("Invalid input.. Try again .\n");
        exit(1);
    }
    if (percentage >= 90 && percentage <= 100) // Garde Ex
    {
        printf("Grade recieved is Ex\n");
    }
    else if (percentage >= 80 && percentage <90) // Garde A
    {
        printf("Grade recieved is A\n");
    }
    else if (percentage >= 70 && percentage < 80) // Garde B
    {
        printf("Grade recieved is B\n");
    }
    else if (percentage >= 60 && percentage < 70) // Garde V
    {
        printf("Grade recieved is C\n");
    }
    else if (percentage >= 50 && percentage < 60) // Garde P
    {
        printf("Grade recieved is P\n");
    }
    else if (percentage >= 0 && percentage < 50)// failed
    {
        printf("Sorry you have failed.\n");
    }
    else
    {
        printf("Invalid input.. Try again .\n");
    }
    getch();// used to pause the execution of a program until the user enters a key.
    return 0;
}
