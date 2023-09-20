//WAP to initialise 2 numbers from user input & find their sum
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("Enter the 1st Number:");
	scanf("%d",&a);
	printf("Enter the 2nd Number:");
	scanf("%d",&b);
	int c=a+b;
	printf("The sum of %d & %d is :%d",a,b,c);
	getch(); // used to pause the execution of a program until the user enters a key.
	return 0;
}
