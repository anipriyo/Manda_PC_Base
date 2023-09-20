#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i=1;
	printf("Enter the limit : ");
	scanf("%d",&n);
	printf("The numbers are :");
	while(i<=n){
		printf("%d ",i);
		i++;
	}
	getch();
	return 0;
}
