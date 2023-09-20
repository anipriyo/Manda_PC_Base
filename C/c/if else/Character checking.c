#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a character:");
	scanf("%c",&ch);
	if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
	{
		printf("\n This is a character.");
	}
	else
	{
		printf("\n This is not a character.");
	}
	return 0;	
}
