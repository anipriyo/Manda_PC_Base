// WAP to Showcase the input & Output of different data types in C
#include<stdio.h>
#include<conio.h>
int main(){
    int a;
    float b;
    char c;
    printf("Enter an integer Number a decimal Number and a Character: ");
    scanf("%d %f %c",&a,&b,&c);
    printf("The inputs are %d , %f & %c",a,b,c);
    getch(); // used to pause the execution of a program until the user enters a key.
    return 0;
}