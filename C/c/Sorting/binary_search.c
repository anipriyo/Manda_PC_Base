#include<stdio.h>
int binarysearch(int,int,int,int)
int main()
{
	int a,i,size;
	
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
		int low=0;
		int high=size-1;
	    binarysearch(arr ,search, low, high );
	    
	
	
	return 0;
}
int binarysearch(int arr[] ,int search,int low,int high )
{
	if(high>1)
	{
		int mid=(low+high)/2;
		if(mid==search)
		{
			
		}
	}
}
