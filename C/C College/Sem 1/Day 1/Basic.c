// WAP to Showcase the input & Output functions in C
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
    int a,input;
    printf("Enter an integer :");
    input=scanf("%d",&a); // input
    if (input != 1) // Checking if the input is valid or not
    {
        printf("Invalid input.. Try again .\n");
        exit(1);
    }
    printf("The input is %d ",a); // output
    getch(); // used to pause the execution of a program until the user enters a key.
    return 0;
}