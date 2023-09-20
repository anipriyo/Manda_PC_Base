#include<stdio.h>
//int swap(int,int);
void bubblesort(int arr[],int size)
{
	int i,j,temp;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size-i-1;j++)
		{
			if(arr[j]>arr[j+1]);
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
//int swap(int arr[],int arr[])

int main()
{
	int size,i;
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
	
	bubblesort(arr,size);
	printf("\n After swaping:");
	for(i=0;i<size;i++)
	{
		printf(" %d ",arr[i]);
	}
	return 0;
}


