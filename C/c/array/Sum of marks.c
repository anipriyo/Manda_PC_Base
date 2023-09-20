#include<stdio.h>
int main()
{
	int marks[8],i,sum=0,average;
	for(i=0;i<8;i++)
	{
		printf("\n Enter the marks in subjects within 100 : ");
		scanf("%d",&marks[i]);
		sum=sum+marks[i];
	}
	printf("\n total Marks = %d ",sum);
	average=sum/8;
	printf("\n Average = %d ",average);
	return 0 ;
}
