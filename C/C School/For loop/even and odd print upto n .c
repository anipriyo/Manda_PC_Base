#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j;
	printf("Enter the limit : ");
	scanf("%d",&n);
	printf("The even numbers are :");
	for(i=2;i<=n;i=i+2){
		printf("%d ",i);
	}
	printf("\nThe odd numbers are :");
	for(j=1;j<=n;j=j+2){
		printf("%d ",j);
	}
	return 0;
}
