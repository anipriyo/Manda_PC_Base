#include<stdio.h>
#include<math.h>
int digitcount(int);
int rcomplement(int,int);
int main()
{
	int x,y;
	int m,n,comp,sub,DC,ans,p;
	printf("Enter the first number in decimal system :");
	scanf("%d",&x);
	printf("\n Enter the second number in decimal system containing same number of digits as first number :");
	scanf("%d",&y);
	m = digitcount(x);
	n = digitcount(y);
	if (m==n)
	{
		comp = rcomplement( x, m);
		sub = y + comp;
		DC = digitcount(sub);
		if (DC>m)
		{
			p=DC-1;
			ans= rcomplement( sub, p);
			printf("\n %d - %d = %d ",x,y,ans);
		}
		else
		{
			ans = rcomplement( sub, DC);
			printf("\n %d - %d = %d ",x,y,ans);
		}
	}
	else
	{
		printf("\n Wrong input,Enter again.");
    }
	return 0;
}
int digitcount(int a)
{
	int b = 0 ;
	while (a!=0)
	{
		a = a / 10 ;
		b++ ;
	}
	return b;
}
 int rcomplement(int x,int m)
{
	int z = pow(10,m) - x;
	return z ;
}
 
