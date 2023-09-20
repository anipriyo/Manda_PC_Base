#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[3][3];
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter the number : ");
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\t%d",arr[j][i]);
		}
		printf("\n");
	}
	getch();
	return 0;
}
