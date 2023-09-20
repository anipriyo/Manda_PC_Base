#include<stdio.h>
main()
{
	int a,b,c ;
	printf("Enter the First angle : ");
	scanf("%d",&a);
	printf("Enter the Second angle : ");
	scanf("%d",&b);
	printf("Enter the Third angle : ");
	scanf("%d",&c);
	if(a+b+c==180)
	{
		printf("The triangle is valid");
	}
	else
	{
		printf("The triangle is not valid");
	}
}
