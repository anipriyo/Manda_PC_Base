#include<stdio.h>
#include<conio.h>
int main()
{
	float l,b,h;
	printf("Enter the length, breadth and height of the Cuboid :");
	scanf("%f,%f,%f",&l,&b,&h);
	float vol=l*b*h;
	float surf=2*(l*b + b*h + l*h);
	printf("\nvolume of the cuboid is %f and its total surface area is %f",vol,surf);
	getch();
	return 0;
}
