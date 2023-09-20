#include<stdio.h>
int main()
{
	int arr[20],i,n,a,b,max,min;
	printf("Enter the number of data you want to enter :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter a number :");
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	min=arr[0];
	for(a=1;a<n;a++)	
	{
		if(arr[a]>max)
		{
			max=arr[a];
		}
	}
	for(b=1;b<n;b++)	
	{
		if(arr[b]<min)
		{
			min=arr[b];
		}
	}
	printf("maximum is = %d",max);
	printf("\n minimum is = %d",min);
	return 0;
}
