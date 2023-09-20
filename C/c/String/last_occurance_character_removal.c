#include<string.h>
#include<stdio.h>
int main()
{
    char s[1000],c;  
    int  i,j,k,count=0,n,len;
    printf("Enter  the string : ");
    gets(s); 
	printf("Enter character: ");
    c=getchar(); 
	n=strlen(s) ; 
    for(i=0;i<n;i++)  
    {	 
    	len++;
        if(c==s[i])
        {
			count=i;
		}
    }  
	if(count!=-1)
	{
		for(j=count;j<n;j++)
		{
			s[j]=s[j+1];
		}
	}
 	printf("%s",s);
    return 0;
}
