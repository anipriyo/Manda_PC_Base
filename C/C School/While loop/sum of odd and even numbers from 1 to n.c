#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i=0,sum1=0,sum2=0;
	printf("Enter the limit:");
	scanf("%d",&n);
	while(i<=n){
		if(i%2==0)
		sum1=sum1+i;
		else
		sum2=sum2+i;
		i++;
	}
	printf("Sum of even is : %d",sum1);
	printf("\nSum of odd is : %d",sum2);
	getch();
	return 0;
}
