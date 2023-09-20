#include<string.h>
#include<stdio.h>
int main()
{
    char s[1000],c;  
    int  i,j,k,n;
    printf("Enter  the string : ");
    gets(s); 
	printf("Enter character: ");
    c=getchar();  
	n=strlen(s);
    for(i=0;i<n;i++)  
    {	 
        if(c==s[i])
        {
			for(j=i;j<n;j++)
			{
				s[j]=s[j+1];
			}
			i--;
			n--;
		}
    }   
 	printf("%s",s);
    return 0;
}

