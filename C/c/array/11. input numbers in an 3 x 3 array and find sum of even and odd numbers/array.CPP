#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[3][3];
	int i,j,sE=0,sO=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter the number : ");
			scanf("%d",&arr[i][j]);
			if(arr[i][j]%2==0)
				sE=sE+arr[i][j];
			if(arr[i][j]%2!=0)
				sO=sO+arr[i][j];
		}
	}
	printf("The sum of even numbers is %d\n",sE);
	printf("The sum of odd numbers is %d\n",sO);
	getch();
	return 0;
}
