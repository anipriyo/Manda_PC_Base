#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[10];
	int i,min,max;
	for(i=0;i<10;i++){
		printf("Enter the number : ");
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	min=arr[0];
	for(i=0;i<10;i++){
		if(arr[i]>max)
			max=arr[i];
		if(arr[i]<min)
			min=arr[i];
	}
	printf("The largest number is : %d\n",max);
	printf("The smallest number is : %d\n",min);
	getch();
	return 0;
}
