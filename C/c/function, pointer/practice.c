#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int a=10 ,*b=&a ,**c=&b, ***d=&c;
    ***d=20;
    // printf("%d",***d);
    printf("\n%d",a);
    return 0;
}