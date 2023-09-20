#include<stdio.h>
int main()
{
	int n,i,j,k,m=1 ;
	printf("Enter the number of rows :");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=1;j<m;j++)
		{
			printf("  ");
		}
		for(k=1;k<=2*i-1;k++)
		{
			printf("* ");
		}
		m++;
		printf("\n");
	}
	return 0;
}
// Time Complexity - O(n^2)
