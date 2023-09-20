#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,sum=0,u;
	printf("Enter the limit:");
	scanf("%d",&u);
	for(i=0;i<u;i++){
		printf("Enter a number: ");
		scanf("%d",&n);
		sum=sum+n;
		n=0;
	}
	printf("Sum is : %d",sum);
	getch();
	return 0;
}
