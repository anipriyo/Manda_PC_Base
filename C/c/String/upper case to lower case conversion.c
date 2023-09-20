#include<stdio.h>
#define MAX_SIZE 100
int main()
{
	int i ;
	char str[MAX_SIZE];
	printf("Enter a String :");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			str[i]=str[i] + 32;
		}
	} 
	printf("\n The string is :%s",str);
	return 0;
}
