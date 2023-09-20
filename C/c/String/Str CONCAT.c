#include<stdio.h>
#include<string.h>
int main()
{
	int a,n=0,i,len=0;
	char str[25],str2[25],str3[50];
	printf("Enter a string :");
	gets(str);
	printf("\n Enter another string :");
	gets(str2);		
	for(a=0;str[a]!='\0';a++)
	{
		len++;
	}	
	printf("\n the length of 1st string is :%d ",len);	
	while(str2[n]!='\0')
	{
		str[len]=str2[n];
		n++;
		len++;
	}
	printf("\n the new string is : ");
	puts(str);
	getch();

	return 0;
}
