#include<stdio.h>
int main()
{
	long long a ;
	int b = 0 ;
	printf("Enter a number :");
	scanf("%d",&a);
	while (a!=0)
	{
		a = a / 10 ;
		b++ ;
	}
	printf ("the digit count of the number is %d",b) ;
	return 0 ;
}
