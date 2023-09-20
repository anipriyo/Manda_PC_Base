#include<stdio.h>
int main()
{
	int var, rev=0;
	printf("Enter the number:");
	scanf("%d",&var);
	while(var!=0)
	{
		rev=(rev*10)+(var%10);
		var=var/10;
	}
		printf("The number is: %d",rev);
}
