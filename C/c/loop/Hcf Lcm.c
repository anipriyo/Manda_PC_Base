#include<stdio.h>
int main()
{
	int a,b,x,y,h,m,n,l;
	printf("enter the first number :");
	scanf("%d",&a);
	printf("enter the second number :");	
	scanf("%d",&b);
	x=a ;
	y=b	;
	if(x<y)
	{
		while(x!=0)
		{
			h=x;
			x = y % x;
			y=h;
		}
		printf("\n the hcf of %d and %d is %d",a,b,y);
	}
	else
	{
		while(y!=0)
		{
			h=y;
			y=y%x;
			x=h;
		}
		printf("\n the hcf of %d and %d is %d",a,b,x);	
	}
	m=a;
	n=b;
	while(m!=n)
	{
		if(m<n)
		{
			m=m+a;
		}
		else
		{
			n=n+b;
		}
	}
		printf("\n the lcm of %d and %d is %d",a,b,n);
		return 0;
}
