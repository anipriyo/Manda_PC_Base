#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,big ;
    printf("Enter three numbers : ") ;
    scanf("%d,%d,%d",&a,&b,&c) ;
    if(a==b && b==c){
    	printf("The numbers are same");
	}
	else{
		big = a>b?(a>c?a:c):(b>c?b:c) ;
 	    printf("\nThe biggest number is : %d",big) ;
	}
    getch();
    return 0;
}

