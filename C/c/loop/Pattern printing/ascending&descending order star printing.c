#include<stdio.h>
int main()
{
	int n,i,a,j,k;
	printf("enter the number of lines for printing star series : ");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(n=1;n<=i;n++)
		{
			printf("%d",i);
			if(n!=i)
			{
				printf(" * ");
			}
		}
		printf("\n");
	}
	for(j=a;j>=1;j--)
	{
		for(k=1;k<=j;k++)
		{
			printf("%d",j);
			if(j!=k)
			{
				printf(" * ");
			}
		}
		printf("\n");
	}
		
	return 0;
}
/*
#include<stdio.h>
int main()
{
	int n,i,a,j,k;
	printf("enter the number of lines for printing star series : ");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(n=1;n<=i;n++)
		{
			printf("%d",i);
			if(n!=i)
			{
				printf(" * ");
			}
		}
		printf("\n");
	}
	for(j=a-1;j>=1;j--)
	{
		for(k=1;k<=j;k++)
		{
			printf("%d",j);
			if(j!=k)
			{
				printf(" * ");
			}
		}
		printf("\n");
	}
		
	return 0;
}
*/
