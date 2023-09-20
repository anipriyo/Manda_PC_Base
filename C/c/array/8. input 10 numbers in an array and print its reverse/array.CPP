#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[10];
	int i;
	for(i=0;i<10;i++){
		printf("Enter the number : ");
		scanf("%d",&arr[i]);
	}
	for(i=9;i>=0;i--){
		printf("%d ",arr[i]);
	}
	getch();
	return 0;
}
