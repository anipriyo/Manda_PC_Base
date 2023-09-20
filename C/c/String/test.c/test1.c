#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	printf("Enter your string :");
	scanf("%[A-Z0-9]",str);
	printf("the string is : %s\n",str);
}		
