#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j;
	printf("Enter a number :");
	scanf("%d",&n);
	printf("Even factors are :");
	for(i=1;i<=n;i++){
		if(n%i==0 && i%2==0)
			printf("%d ",i );
	}
	printf("\nOdd factors are :");
	for(j=1;j<=n;j++){
		if(n%j==0 && j%2 !=0)
			printf("%d ",j );
	}
	getch();
	return 0;
}
