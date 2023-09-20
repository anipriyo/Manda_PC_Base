#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,min=0,num;
	printf("Enter the limit: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Enter a number : ");
		scanf("%d",&num);
		if(i==1)
			min=num;
		if(num<min)
			min=num;
	}
	printf("The smallest number is %d",min);
	getch();
	return 0;
}
