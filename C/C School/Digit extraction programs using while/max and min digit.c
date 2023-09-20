#include<stdio.h>
#include<conio.h>
int main()
{
	int n,cpy,r;
	printf("Enter a number: ");
	scanf("%d",&n);
	cpy=n;
	int min=n%10,max=min;
	while(cpy>0){
		r=cpy%10;
		if(r>max)
			max=r;
		if(r<min)
			min=r;
		cpy=cpy/10;
	}
	printf("The largest digit is: %d",max);
	printf("\nThe smallest digit is: %d",min);
	getch();
	return 0;
}
