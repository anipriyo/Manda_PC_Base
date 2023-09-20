# include<stdio.h>
main()
{
	int a ;
	printf("enter a number : ");
	scanf("%d",&a);
	if(a%5==0)
	{
		if(a%11==0)
		{
  			printf("The number(%d) is divisible by both 5 and 11 ",a);
		}
    	else
		{
     		printf("The number(%d) is divisible by 5 ",a);
		}
   }
   else if(a%11==0)
   {
 	  if(a%5==0)
	   {
  		printf("The number(%d) is divisible by both 5 and 11 ",a);
	   }
      else
	  {
     	printf("The number(%d) is divisible by 11 ",a);
	  }
   }
   else 
   {
 		printf("The number(%d) is not divisible by 11 and 5 ",a);
   }
}
