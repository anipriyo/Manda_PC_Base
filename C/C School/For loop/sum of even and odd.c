#include<stdio.h>
#include<conio.h>
int main()
{
	int n,u,i,sum1=0,sum2=0;
	printf("Enter the limit:");
	scanf("%d",&u);
	for(i=0;i<u;i++){
		printf("Enter a number: ");
		scanf("%d",&n);
		if(n%2==0)
		sum1=sum1+n;
		else
		sum2=sum2+n;
		n=0;
	}
	printf("Sum of even is : %d",sum1);
	printf("\nSum of odd is : %d",sum2);
	getch();
	return 0;
}
