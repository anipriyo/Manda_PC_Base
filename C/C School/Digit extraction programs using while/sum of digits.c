#include<stdio.h>
#include<conio.h>
int main()
{
	int n,c,s=0,r;
	printf("Enter a number: ");
	scanf("%d",&n);
	c=n;
	while(c>0){
		r=c%10;
		s=s+r;
		c=c/10;
	}
	printf("The sum of digits are : %d",s);
	getch();
	return 0;
}
