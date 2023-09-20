#include<stdio.h>
#include<string.h>
int main()
{
int i=0,len=0,a;
char str[20],str2[20];
printf("ENTER A STRING:");
gets(str);
for(a=0;str[a]!='\0';a++)
{
	len++;
}
printf("The string length is :%d",len);
for(a=len;a!=0;a--)
{
   str2[i]=str[a-1];
   i++;
}
printf("\n The string is :");
puts(str2);
return 0;
}
