#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *arr1,*arr2;
	int n,i,t;
	printf("Enter The Array Size :");
	scanf("%d",&n);
	arr1=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		arr1[i]=i;
	}
		printf("arr1 :");
	for(i=0;i<n;i++)
	{

		printf("%d ",arr1[i]);	
	}
	printf("\n");
	arr2=(int*)calloc(n,sizeof(int));
	for(i=0;i<n;i++)
	{
		arr2[i]=i;
	}
		printf("arr2 :");
	for(i=0;i<n;i++)
	{

		printf("%d ",arr2[i]);	
	}
		printf("\n");
		
		printf("Enter The new Array Size :");
		scanf("%d",&t);
		arr1=realloc(arr1,n*sizeof(int));
	for(i=n;i<t;i++)
	{
		arr1[i]=i+2;
	}
		printf("arr1 :");
	for(i=0;i<t;i++)
	{

		printf("%d ",arr1[i]);	
	}
	printf("\n");
	free(arr2);
	/*	for(i=0;i<n;i++)
	{

		printf("%d ",arr2[i]);	
	}
		printf("\n");*/
	free(arr1);
	/*for(i=0;i<n;i++)
	{

		printf("%d ",arr1[i]);	
	}*/
	
	
	return 0;
}
