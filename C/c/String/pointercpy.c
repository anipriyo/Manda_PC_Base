#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>

int main(){
    char s1[10],s2[10];
    char *str1=s1 , *str2=s2;
    printf("Enter a string : ");
    gets(s1);
    while(*str1!='\0'){
        *str2=*str1;
        str1++;
        str2++;
    }
    *str2='\0';
    printf("\n");
    puts(s2);
    return 0;
}