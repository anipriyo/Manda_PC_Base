#include<stdio.h>
#include<conio.h>
int main()
{
	float c,f;
	printf("Enter the temperature in Celcius :");
	scanf("%f",&c);
	f=(9*c+160)/5;
	printf("The temperature in farenheit scale is %f",f);
	getch();
	return 0;
}
