#include<stdio.h>
int main()
{
	int n,i,a,c,b;
	printf("enter the number of lines for printing star series : ");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		c=1;
		for(n=1;n<=i;n++)
		{
		printf(" %d ",c);
		c=c*2;
		}
		printf("\n");
	}
	return 0;
}
