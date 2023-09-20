#include<stdio.h>
int main()
{
	int n,i,a;
	printf("enter the number of lines for printing star series : ");
	scanf("%d",&a);
	for(i=a;i>=1;i--)
	{
		for(n=1;n<=i;n++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
// Time Complexity - O(n^2)
