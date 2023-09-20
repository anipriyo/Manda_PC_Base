// WAP TO CHECK EVEN OR ODD
#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	printf("Enter a number: ");
	scanf("%d",&a);
	if(a%2==0){
		printf("\n%d is even.",a);
	}
	else{
		printf("\n%d is odd.",a);
	}
	getch();
	return 0;
}
