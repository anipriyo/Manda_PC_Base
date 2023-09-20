#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int swap(int*,int*);
int main(){
    int a=10,b=20;
    printf("%d , %d\n",a,b);
    swap(&a,&b);
    printf("%d , %d\n",a,b);
    return 0;
}
int swap(int*x , int*y){
    *y=*x+*y;
    *x=*y-*x;
    *y=*y-*x;
}