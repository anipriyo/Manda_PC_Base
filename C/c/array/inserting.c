#include<stdio.h>
int main()
{
	int i,a,index,value,size;
	printf("Enter the array size : ");
	scanf("%d",&size);
	int arr[size];
	printf("Enter the array : ");
	for(i=0;i<size;i++)
	{
		scanf("%d ",&arr[i]);
	}
	printf("The array is : ");
	for(i=0;i<size;i++)
	{
		printf("%d  ",arr[i]);
	}
/*	printf("\nEnter the array index for inserting the digit:");
	scanf("%d",&index);
	printf("\nEnter inserting the digit:");
	scanf("%d",&value);	
	if(size>=index)
	{
		for(i=0;i<index;i++)
		{
			arr[i+1]=arr[i];
		}
			arr[i+1]=value;
	}
	else
	{
		printf("\n invalid Input");
	}
	printf("\nThe array is :");
	for(i=0;i<=size+1;i++)
	{
		printf("%d  ",arr[i]);
	}*/
	
	return 0;	
}
