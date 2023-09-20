#include<stdio.h>
main()
{
	int a ;
	printf("\nEnter your age : ");
	scanf("%d",&a);
	if(a>=18)
	{
		printf("\nYou are eligible for voting.");
	}
	else
	{
    	printf("\nYou are not eligible for voting.");	
	}
}
