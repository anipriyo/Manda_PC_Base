#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
FILE *fs ,*ft;
int ch;
fs=fopen("UA.exe","rb");
	if(fs== NULL)
	{
		puts("Cannot open the file .");
			exit(1);
	}
	ft=fopen("UA1.exe","wb");
	if(ft==NULL)
	{
		puts("Cannot open the file .");
		fclose(fs);
		exit(2);
	}
	while(1)
	{
		ch=fgetc(fs);
		if(ch==EOF)
		{
			break;
		}
		else{
			fputc(ch,ft);
		}
	}
		fclose(ft);
		fclose(fs);
	
	return 0;
}
	
