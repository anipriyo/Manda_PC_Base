# include<stdio.h>
main()
{
	int a,b,c,d,e,f ;
	float g ;
	printf("enter your marks in Physics out of 100 : ");
	scanf("%d",&a);
	
	printf("enter your marks in Chemistry out of 100 : ");
	scanf("%d",&b);
	
	printf("enter your marks in Biology out of 100 : ");
	scanf("%d",&c);
	
	printf("enter your marks in Mathematics out of 100 : ");
	scanf("%d",&d);
	
	printf("enter your marks in Computer out of 100 : ");
	scanf("%d",&e);
	
	f=a+b+c+d+e;
	printf("Your total is %d",f);
	g=f/5;
	printf("\n Your Percentage is %f %",g);
	
	if(g>=90 && g<=100)
	{
		printf("\n Your grade is A ");
	}
	else if(g>=80 && g<=89)
	{
		printf("\n Your grade is B ");
	}
	else if(g>=70 && g<=79)
	{
		printf("\n Your grade is C ");
	}
	else if(g>=60 && g<=69)
	{
		printf("\n Your grade is D ");
	}
	else if(g>=40 && g<=59)
	{
		printf("\n Your grade is E ");
	}
	else
        printf("\n Your grade is F ");	
}
