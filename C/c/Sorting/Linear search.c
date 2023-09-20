#include<stdio.h>
int main()
{
	int a,i,size,search,flag=0;
	printf("Enter The Array Size:");
	scanf("%d",&size);
	int arr[size];
	
	for(i=0;i<size;i++)
	{
		printf("Enter the array %d value: ",i);
		scanf("%d",&arr[i]);
	}
	printf("the array is:");
	for(i=0;i<size;i++)
	{
		printf(" %d ",arr[i]);
	}
	printf("\n Enter the number to search the array: ");
	scanf("%d",&search);
	for(i=0;i<=size;i++)
	{
		if(arr[i]==search)
		{
			printf("\n Result found !!!");
			printf("\n your search element is %d located in the %d th position",search,i);
			flag++;
		}
	}
	if(flag==0)
		{
			printf("\n Result not found !!!");
		}
	return 0;
}
