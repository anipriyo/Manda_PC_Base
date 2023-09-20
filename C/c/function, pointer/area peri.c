#include<stdio.h>
#include<conio.h>
int area(int x,int y){
	float z = x * y;
	printf("\n The area is %d",z);
}
int peri(int x,int y){
		float peri=2*(x+y);
	printf("\n The perimeter is %d",peri);
}
int main()
{
	int l,b;
	printf("Enter the length and breadth of the rectangle :");
	scanf("%d,%d",&l,&b);
	area(l,b);
	peri(l,b);
	getch();
	return 0;
}
