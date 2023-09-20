#include<stdio.h>
#include<conio.h>
int main()
{
	float c,f;
	printf("Enter the temperature in Farenheit scale :");
	scanf("%f",&f);
	c=(5*f-160)/9;
	printf("The temperature in Celcius scale is %f",c);
	getch();
	return 0;
}
