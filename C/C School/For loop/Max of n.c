#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,max=0,num;
	printf("Enter the limit: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("Enter a number : ");
		scanf("%d",&num);
		if(i==1){
			max=num;
		}
		if(num>max){
			max=num;
		}
	}
	printf("The greatest number is %d",max);
	getch();
	return 0;
}
