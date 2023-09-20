#include<stdio.h>
int main()
{
	int n,i,j,row;
	printf("enter the number of lines for printing star series : ");
	scanf("%d",&row);
	for(i=row;i>=1;i--)
	{
		int count = i ;
		for(j=1;j<=row;j++)
		{
			if(count<=row)
			{
				printf("%d",count);
			}
			else{
				printf("%d",row);
			}
			count ++ ;
		}
		printf("\n");
	}
	return 0;
}
// Time Complexity - O(n^2)
