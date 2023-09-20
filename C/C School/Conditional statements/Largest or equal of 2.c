// WAP to input two numbers and find the largest or whether they are equal
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("Enter the First and Second Number :");
	scanf("%d,%d",&a,&b);
	if(a>b)
	{
		printf("The Largest number is %d",a);	
	}
	else if(a<b)
	{
		printf("The Largest number is %d",b);	
	}
	else
	{
		printf("The numbers are equal");	
	}
	getch();
	return 0;
}
