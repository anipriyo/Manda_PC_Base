#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[10],i,n,max=0,j=0;
	for(i=0;i<10;i++)
	{
		printf("Enter a number :");
		scanf("%d",&arr[i]);
		if(arr[i]%2==1){
			if(j==0){
				max=arr[i];
				j++;
			}
			else{
				if(max<arr[i]){
         			max=arr[i];
        		}	
			}
		}			
	}
	if(j==0)
      printf("There is no Odd Value in Array");
    else
    printf("Largest Odd value in Array is : %d",max);
    getch();
    return 0;
}
