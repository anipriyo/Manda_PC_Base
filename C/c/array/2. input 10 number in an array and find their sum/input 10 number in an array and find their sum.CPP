#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[10];
	int i,s=0;
	for(i=0;i<10;i++){
		printf("Enter the number : ");
		scanf("%d",&arr[i]);
		s=s+arr[i];
	}
	printf("The sum is : %d",s);
	getch();
	return 0;
}
