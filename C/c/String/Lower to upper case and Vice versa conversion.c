#include<stdio.h>
#include<string.h> 
int main()
{
    char str[100];
    int i;
    printf("Enter your text : ");
//    gets(str);
	scanf("%[^\n]",str);
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i] = str[i] - 32;
            continue ;
        }
        if(str[i]>='A' && str[i]<='Z') 
		{
      	    str[i] = str[i] + 32;
       	    continue ;
   		}
    }

    printf("Inverse string : %s",str);
    return 0;
}

