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
	for(i=0;i<10;i++){
		if(arr[i]%2!=0)
			printf("%d\n",arr[i]);
	}
	getch();
	return 0;
}
