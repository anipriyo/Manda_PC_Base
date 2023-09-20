#include<stdio.h>
int main()
{
	int arr[20],i,num,a;
	printf("Enter the number of data you want to enter :");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf("\n Enter a number :");
		scanf("%d",&arr[i]);
	}
		printf("\n Array in reverse :");
	for(a=num-1;a>=0;a--)
	{
		printf("%d" ,arr[a]);
	}
	return 0;
}
