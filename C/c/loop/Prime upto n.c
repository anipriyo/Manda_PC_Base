#include<stdio.h>
int main()
{
	int a,i,n;
	printf("Enter a number limit :");
	scanf("%d",&a);
	printf("\n The prime numbers are :");
	for(n=1;n<=a;n++)
	{
		int b=0;
		for(i=1;i<=n;i++)
		{
			if(n%i==0)
			{
				b++;
			}
		}
		if(b==2)
		{
			printf("%d ",n);
		}
	}
	return 0;
}
