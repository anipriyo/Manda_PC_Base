#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[3][3];
	int i,j,s=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter the number : ");
			scanf("%d",&arr[i][j]);
			s=s+arr[i][j];
		}
	}
	printf("The sum is %d",s);
	getch();
	return 0;
}
