#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a,arr[1000];
	FILE *fptr;
	fptr=fopen("abc.txt","r");
	if(fptr==NULL)
	{
		printf("Error");
		exit(1);
	}
	printf("The Data in the file is :");
	while((a=fgetc(fptr))!=EOF)
	{
		printf("%c",a);
	}
	fclose(fptr);
	fptr=fopen("abc.txt","a");
	if(fptr==NULL)
	{
		printf("Error");
		exit(1);
	}
	printf("Enter a new text to be inserted.");
	fgets(arr,sizeof(arr),stdin);
	fprintf(fptr,"%s",arr);
	fclose(fptr);
	fptr=fopen("abc.txt","r");
	printf("The Data in the file is :");
	while((a=fgetc(fptr))!=EOF)
	{
		printf("%c",a);
	}
	fclose(fptr);
	return 0;
}
