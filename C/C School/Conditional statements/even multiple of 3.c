#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	if(a%3==0 && a%2==0){
		printf("\nThe number is an even multiple of 3 ");
	}
	else{
		printf("\nThe number is not an even multiple of 3 ");
	}
	getch();
	return 0;
}
