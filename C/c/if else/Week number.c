#include<stdio.h>
main()
{
	int a;
	printf("Enter the week number: ");
	scanf("%d",&a);
	if(a==1)
	{
		printf("It is Sunday");
	}
	else if(a==2)
	{
		printf("It is Monday");
	}
	else if(a==3)
	{
		printf("It is Tuesday");
	}
	else if(a==4)
	{
		printf("It is Wednesday");
	}
	else if(a==5)
	{
		printf("It is Thursday");	
	}
	else if(a==6)
	{  
		printf("It is Friday");	
    }
    else if(a==7)
	{
		printf("It is Saturday");
	}
	else
	{
			printf("Wrong input");
	}
}
