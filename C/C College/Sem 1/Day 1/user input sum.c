//WAP to initialise 2 numbers from user input & find their sum
#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
int main()
{
	float a,b,c;
	int input;
	printf("Enter 2 numbers");
	input=scanf("%f %f",&a,&b);
	if (input != 2) // Checking if the input is valid or not
    {
        printf("Invalid input.. Try again .\n");
        exit(1);
    }
	c=a+b; // Sum 
	printf("The sum of %.3f & %.3f is :%.3f",a,b,c);
	getch(); // used to pause the execution of a program until the user enters a key.
	return 0;
}
