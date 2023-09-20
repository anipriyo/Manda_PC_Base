#include<stdio.h>
#include<conio.h>
int main()
{
	float a,d=0.0;
	printf("Enter the purchased amount in Rs.: ");
	scanf("%f",&a);
	if(a>0 && a<=2000){
		d=0.2*a;
	}
	else if(a>2000 && a<=4000){
		d=0.3*a;
	}
	else if(a>4000 && a<=6000){
		d=0.4*a;
	}
	else{
		d=0.5*a;
	}
	printf("The discount on %f is %f and the payable amount is %f",a,d,(a-d));
	getch();
	return 0;
}
