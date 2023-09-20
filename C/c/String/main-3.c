/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
all_occurrence_remove(char* , char);
int main()
{

    char str[100],str2[100], del;
    printf("Enter string: ");
    gets(str);
    printf("\nEnter character to be removed: ");
    scanf("%c", &del);
    all_occurrence_remove(str,del);
    printf("\n%s", str);
    
}
all_occurrence_remove(char *str, char del){
    
    int i=0,n=0;
    int len = strlen(str);
  
    for(i=0;i<=len && str[i]!='\0';i++){
        str[i]=str[i+n];
        if(str[i]==del){
            n++;
            i--;
        }
    }
}





