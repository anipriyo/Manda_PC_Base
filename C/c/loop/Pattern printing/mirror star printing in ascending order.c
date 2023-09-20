#include<stdio.h>
int main()
{
	int a,n,i,j;
	printf("enter the number of lines :");
	scanf("%d",&a);
	for(i=a;i>=1;i--)
	{
		for(n=1;n<=i;n++)
		{
			printf("  ");
		}
		for(j=i;j<=a;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
// Time Complexity - O(n^2)
