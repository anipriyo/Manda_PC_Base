#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[10],i,maxO;
	for(i=0;i<10;i++){
		printf("Enter the number : ");
		scanf("%d",&arr[i]);
		if(arr[i]%2!=0)
			maxO=arr[i];
	}
	for(i=0;i<10;i++){
		if(arr[i]>maxO && arr[i]%2!=0)
			maxO=arr[i];
	}
	printf("The largest odd number is : %d.\n",maxO);
	getch();
	return 0;
}

