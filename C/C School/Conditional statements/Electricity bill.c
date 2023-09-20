#include<stdio.h>
#include<conio.h>
int main()
{
	int u;
	float a;
	printf("Enter the units to be charged :");
	scanf("%d",&u);
	if(u>0 && u<=50){
		a=100;
	}
	else if(u>50 && u<=100){
		a=3*(u-50) + 100;
	}
	else if(u>100 && u<=200){
		a=3.5*(u-100) + 50*3 + 100;
	}
	else if(u>200 && u<=300){
		a=4.5*(u-200) + 50*3 + 100*3.5 + 100;
	}
	else{
		a=6*(u-300) + 50*3 + 100*3.5 + 100*4.5 + 100;
	}
	printf("The payable bill is:Rs. %f",a);
	return 0;
}
/* int unit;
float amt=0.0;
float ren=100.0;
printf(“ Enter the no. of units : ”);
scanf(“%d”, & unit);
if(unit<=50)
{
amt=0.0;
}
else if( unit >50 && unit<=100)
{
	amt=(unit-50)*3.0;
}
else if(unit>100 && unit<=200)
{
	amt=(50*3.0)+(unit-100)*3.5;
}
else if(unit>200 && unit<=300)
{
	amt=(50*3.0)+(100*3.5)+(unit-200)*4.5;
} 
else
{
	amt=(50*3.0)+(100*3.5)+(100*4.5)+(unit-300)*6.0;
}
printf(“The total amount Payable Rs. %f ”,(amt+ren)); */
