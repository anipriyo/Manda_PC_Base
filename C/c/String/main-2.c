/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
last_occurrence_remove(char* , char);
int main()
{

    char str[100],str2[100], del;
    printf("Enter string: ");
    gets(str);
    printf("\nEnter character to be removed: ");
    scanf("%c", &del);
    last_occurrence_remove(str,del);
    printf("\n%s", str);
    return 0;
}
last_occurrence_remove(char *str, char del){
    int i,j;
    int len = strlen(str);
    for(i=len;i>=0 && str[i]!= del;i--){
	}
    for(j=i;j>=-1;j--)
	{
        str[i]=str[i+1];
        i++;
    }
}
