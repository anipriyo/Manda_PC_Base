#include<stdio.h>
#include<conio.h>
int main()
{
	int a,i=1,b=0;
	printf("Enter a number :");
	scanf("%d",&a);
	while(i<=a)
	{
		if(a%i==0)
			b++;
		i++;
	}
	if(b==2)
		printf("The number is prime");
	else
		printf("The number is not prime");
	getch();
	return 0;
}
