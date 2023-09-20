#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i;
	printf("Enter the limit : ");
	scanf("%d",&n);
	printf("The numbers are :");
	for(i=2;i<=n;i=i+2){
		printf("%d ",i);
	}
	return 0;
}
