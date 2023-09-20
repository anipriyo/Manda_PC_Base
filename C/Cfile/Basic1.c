#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a,arr[1000];
	FILE *fptr;
	fptr=fopen("_FILE_","r");
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
	return 0;
}
