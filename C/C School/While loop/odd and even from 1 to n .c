#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i=2,j=1;
	printf("Enter the limit : ");
	scanf("%d",&n);
	printf("The even numbers are :");
	while(i<=n){
		printf("%d ",i);
		i=i+2;
	}
	printf("\nThe odd numbers are :");
	while(j<=n){
		printf("%d ",j);
		j=j+2;
	}
	getch();
	return 0;
}
