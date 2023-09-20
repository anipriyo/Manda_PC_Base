#include<stdio.h>
#include<conio.h>
int main()
{
	float l,b;
	printf("Enter the length and breadth of the rectangle :");
	scanf("%f,%f",&l,&b);
	float area=l*b;
	float peri=2*(l+b);
	printf("\nThe area of the rectangle is %fsq.unit and its perimeter is %fsq.unit",area,peri);
	getch();
	return 0;
}
