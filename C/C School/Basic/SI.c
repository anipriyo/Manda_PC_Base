#include<stdio.h>
#include<conio.h>
int main()
{
	float si,p,t,r;
	printf("Enter the principle in Rupees , rate of interest in percentage and time in years :");
	scanf("%f,%f,%f",&p,&r,&t);
	si=(p*t*r)/100;
	printf("The simple interest is : %f",si);
	getch();
	return 0;
}
