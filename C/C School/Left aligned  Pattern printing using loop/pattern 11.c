#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j,k=1;
	printf("Enter the number of rows: ");
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		for(j=i;j<=n;j++){
			printf("%d ",k);
			++k;
		}
		printf("\n");
	}
	getch();
	return 0;
}
