#include<stdio.h>
#include<string.h>
int main()
{
	char arr[100];
	int a;
    int len=0;
    printf("Enter a String:");
     gets(arr);
    // scanf("%[^\t\n]s",arr);
    // fgets(arr,sizeof(arr),stdin);
    printf("The string is:%s",arr);
    // len=strlen(arr);
    for(a=0;arr[a]!='\0';a++)
    {
    	len++;
	}
    printf("\n The length of the string is: %d ",len);    
    return 0;
}
