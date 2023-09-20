#include<stdio.h>
int main()
{
	int a , b , c , greater , d ;
	printf("Enter The First Number :");
	scanf("%d",&a);
	printf("Enter The Second Number :");
	scanf("%d",&b);
	printf("Enter The Third Number :");
	scanf("%d",&c);
	
	/*if(a>b && a>c)
	{
		printf("%d is the greatest.",a);
	}
	if(b>c && b>a)
	{
		printf("%d is the greatest.",b);
	}
	if(c>b && c>a)
	{
		printf("%d is the greatest.",c);
	}*/
	
	/*if(a>b)
	{
		if(a>c)
		{
			printf("%d is the greatest.",a);	
		}
		else
		{
			printf("%d is the greatest.",c);
		}
	}
	else
	{
		if(b>c)
		{
			printf("%d is the greatest.",b);
		}
		else
		{
			printf("%d is the greatest.",c);
		}
	}*/
	greater=a>b?(a>c?a:c):(b>c?b:c);
	printf("%d is the greatest",greater);
}
