#include<stdio.h>
#include<string.h>
int main()
{
	int a,c=0;
	char arr[100],arr2[100];
	printf("Enter a string:");
	gets(arr);
//	strcpy(arr2,arr);
	for( a=0; arr[a]!='\0';a++)
	{
		arr2[a]=arr[a];
	} 
	for( a=0; arr2[a]!='\0';a++)
	{
		c++;
	}
	printf("\n The First string is :%s",arr);
	printf("\n The Second string is :%s",arr2);
	printf("\n Array 1 length : %d ",strlen(arr));
	printf("\n Array 2 length : %d ",strlen(arr2));
	printf("\n Array 2 length : %d ",c);
}
