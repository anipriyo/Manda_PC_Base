#include<stdio.h>
#include<conio.h>
int add(int x,int y){
	int z=0 ;
	z = x + y;
	printf("\n The sum of the %d and %d is %d",x,y,z);
}
int main()
{
	int a,b;
	printf("Enter the 1st and 2nd number:");
	scanf("%d,%d",&a,&b);
	add(a,b);
	getch();
	return 0;      
}

