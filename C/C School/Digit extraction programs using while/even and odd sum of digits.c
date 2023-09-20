#include<stdio.h>
#include<conio.h>
int main()
{
	int n,cpy,sum1=0,sum2=0,r;
	printf("Enter a number:");
	scanf("%d",&n);
	cpy=n;
	while(cpy>0){
		r=cpy%10;
		if(r%2==0)
			sum1 += r;
		else
			sum2 += r;
		cpy=cpy/10;
	}
	printf("The Even sum is : %d",sum1);
	printf("\nThe odd sum is : %d",sum2);
	getch();
	return 0;
}
