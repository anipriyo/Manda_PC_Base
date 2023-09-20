#include<stdio.h>
#include<string.h>
int main()
{
	char s[1000];
	int c=0,i;
	printf("Enter the String: \n");
	gets(s);
	for(i=0;s[i]!= '\0';i++)
	{
		if(s[i]==' ' && s[i+1]!=' ')
		c++;
	}
	printf("Number of words are %d",++c);
}
