#include<stdio.h>
int main()
{
	int i,n,a;
	printf("Enter the number of stars in each line of the square shape :");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(n=1;n<=a;n++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
// Time Complexity - O(n^2)
