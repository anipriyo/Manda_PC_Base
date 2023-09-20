#include<stdio.h>
int main()
{
	int lines , i=1 , j;
	printf("Enter the number of lines:");
	scanf("%d",&lines);
	for(i=1;i<=lines;i++){
		for(j=1;j<=i;j++){
			printf(" %d ",i*j);
		}
		printf("\n");
	}
	return 0 ;
}
// complexity = O(n^2)
