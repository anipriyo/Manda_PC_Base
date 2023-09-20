#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a number :");
	scanf("%d",&a);
	b=a;
	c=a;
	while(b>=10)
	{
	b=b/10;
	}
	c=a%10;
	printf("\n the first digit of the number %d is %d",a,b);
	printf("\n the last digit of the number %d is %d",a,c);
	return 0;
}
