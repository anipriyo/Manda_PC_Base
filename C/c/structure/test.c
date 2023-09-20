#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
void swap(int *x,int *y){
    int c;
    c=*y;
    *y=*x;
    *x=c;
}

int main(){
    int a=10,b=20;
    swap(&a,&b);
    // a=a+b;
    // b=a-b;
    // a=a-b;
    printf("%d,%d",a,b);
      return 0;
}