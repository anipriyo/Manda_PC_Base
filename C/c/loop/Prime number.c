#include<stdio.h>
#include<conio.h>
int main()
{
	int a,i,b=0;
	printf("Enter a number :");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
			b++;
	}
	if(b==2)
		printf("The number is prime");
	else
		printf("The number is not prime");
	getch();
	return 0;
}
