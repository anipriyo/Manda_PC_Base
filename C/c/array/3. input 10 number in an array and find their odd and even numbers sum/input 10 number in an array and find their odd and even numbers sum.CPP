#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[10];
	int i,sE=0,sO=0;
	for(i=0;i<10;i++){
		printf("Enter the number : ");
		scanf("%d",&arr[i]);
		if(arr[i]%2==0)
			sE=sE+arr[i];
		else
			sO=sO+arr[i];
	}
	printf("The sum of even numbers is : %d.\n",sE);
	printf("The sum of odd numbers is : %d.\n",sO);
	getch();
	return 0;
}
