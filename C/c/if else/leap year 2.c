#include<stdio.h>
main()
{		
	int a ;
    printf("enter a year : ");
    scanf("%d",&a);
    if(a%100!=0)
    {
  	    if(a%4==0)
		{
  			printf("The year(%d) is a leap year",a);
	    }
        else
		{
     		printf("The  year(%d) is not a leap year ",a);
	    }
   }
	else if(a%400==0)
	{
		printf("The year(%d) is a leap year",a);
	}
	else 
	{
	    printf("The  year(%d) is not a leap year ",a);
	}
}
