#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c ;
	printf("Enter the First Second and Third side of the triangle in cm : ");
	scanf("%d,%d,%d",&a,&b,&c);
	if(a==b && b==c && c==a)
	{
		printf("The triangle is Equilateral");
	}
	else if((a==c && a!=b)|| (a==b && a!=c)|| (b==c && b!=a))
	{
		printf("The triangle is isosceles");	
	}
	else
	{
		printf("The triangle is Scalene");
	}
	getch();
	return 0;
}
// same for individual checks

