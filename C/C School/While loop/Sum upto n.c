#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0,sum=0,n;
	printf("Enter the limit:");
	scanf("%d",&n);
	while(i<=n){
		sum=sum+i;
		i++;
	}
	printf("Sum is : %d",sum);
	getch();
	return 0;
}
