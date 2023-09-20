#include<stdio.h>
#include<conio.h>
int main()
{
	int a=0,b=1,c,n;
	printf("Enter the limit:");
	scanf("%d",&n);
	printf("The series runs as follows:");
	while(a<=n){
		c=a+b;
		printf(" %d ",a);
		a=b;
		b=c;
	}
	getch();
	return 0;
}
