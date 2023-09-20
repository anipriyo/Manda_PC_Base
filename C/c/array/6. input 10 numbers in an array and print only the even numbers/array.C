#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[10];
	int i,j;
	for(i=0;i<10;i++){
		printf("Enter the number : ");
		scanf("%d",&arr[i]);
	}
	printf("\nThe even numbers are :");
	for(i=0;i<10;i++){
		if(arr[i]%2==0)
			printf("%d ",arr[i]);
	}
	printf("\nThe odd numbers are :");
	for(j=0;j<10;j++){
		if(arr[i]%2!=0)
			printf("%d ",arr[i]);
	}
	getch();
	return 0;
}
