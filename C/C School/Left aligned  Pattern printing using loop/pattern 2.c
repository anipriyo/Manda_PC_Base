#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j;
	printf("Enter the number of rows: ");
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
	getch();
	return 0;
}
