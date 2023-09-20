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
	int max=arr[1][1] , min=arr[1][1] ;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(arr[i][j]>max)
				max=arr[i][j];
			if(arr[i][j]<min)
				min=arr[i][j];
		}
	}
	printf("The largest and smallest number are %d & %d",max,min);
	getch();
	return 0;
}
