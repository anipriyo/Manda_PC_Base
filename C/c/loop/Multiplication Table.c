#include<stdio.h>
int main()
{
	int a,b,c ;
	printf("Enter a number for the table :");
	scanf("%d",&a);
	for(b=1;b<=10;b++)
	{
		c=a*b;
		printf("\n %d * %d = %d",a,b,c);
	}
}
