#include<stdio.h>
#include<conio.h>
int main()
{
	int n,cpy,rev=0,r;
	printf("Enter a number: ");
	scanf("%d",&n);
	cpy=n;
	while(cpy>0){
		r=cpy%10;
		rev=rev*10+r;
		cpy=cpy/10;
	}
	if(rev==n)
		printf("The number is a palindrome");
	else
		printf("The number is not a palindrome");
	getch();
	return 0;
}
