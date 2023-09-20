#include<stdio.h>
int main()
{
	long long int a = 0 ,b = 1 , c = 0 ;
	int number , i ;
	printf("Enter the limit of terms :");`
	scanf("%llu",&number);
	printf("The series is : ");
	while(i<number)
	{
		printf(" %llu",c);
		a=b;
		b=c;
		c=a+b;
		i++;
	}
	return 0;
}
