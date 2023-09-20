#include<stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
int main()
{
	int a,b;
	printf("Enter the 1st number:");
	scanf("%d",&a);
	printf("Enter the 2nd number:");
	scanf("%d",&b);
	add(a,b);
	sub(a,b);
    mul(a,b);
    div(a,b);
	return 0;      
}
int add(int x,int y)
{
	int z=0 ;
	z = x + y;
	printf("\n The sum of the %d and %d is %d",x,y,z);
}

int sub(int x,int y)
{
	int z=0 ;
	if(x>y)
	{
		z = x - y;
	}
	else
	{
		z = y - x;
	}
	printf("\n The difference of the %d and %d is %d",x,y,z);
}
int mul(int x,int y)
{
	int z=0 ;
	z = x * y;
	printf("\n The product of the %d and %d is %d",x,y,z);
}
int div(int x,int y)
{
	int z=0 ;
	if(x>y)
	{
		z = x / y;
		printf("\n The quotient of the %d / %d is %d",x,y,z);		
	}
	else
	{
		z = y / x;
		printf("\n The quotient of the %d / %d is %d",y,x,z);		
	}
}
