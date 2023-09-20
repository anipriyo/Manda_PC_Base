#include<stdio.h>
main()
{
	int a , b=0 , sum=0 ;
	printf("Enter a limit :");
	scanf("%d",&a);
	printf("\n The even number is :");
	while(b<=a)
	{
		if(b%2==0)
		{
			printf(" %d",b);
			sum = b+sum;
		}
		b++;
	}
	printf("\n the sum of all even numbers is : %d",sum);
}
