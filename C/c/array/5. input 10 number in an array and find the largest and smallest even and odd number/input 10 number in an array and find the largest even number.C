#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[10],i,maxO=0;
	for(i=0;i<10;i++){
		printf("Enter a number : ");
		scanf("%d",&arr[i]);
		if(arr[i]%2!=0 && arr[i]>maxO)
			maxO=arr[i];
	}
	printf("The largest odd number is : %d\n",maxO);
	getch();
	return 0;
}
