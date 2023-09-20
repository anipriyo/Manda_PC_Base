#include<stdio.h>
#include<conio.h>
//#include<math.h>
//#include<stdlib.h>
//#include<string.h>

int main(){
    float a , b ,c ; // variable declaration
    printf("Enter 2 numbers : ");
    while (scanf("%f %f",&a,&b)!=2 || a==b) // checking input validity 
    {
        printf("\nNo character or equal inputs... Try again : ");
        fflush(stdin); // Clearing input Buffer
    }

    printf("\nThe inserted variables are %f & %f",a,b);// Preview

    // //using 3rd variable
    // c=a;
    // a=b;
    // b=c;

    //Using + & -
    a= a+b;
    b= a-b;
    a= a-b;

    printf("\nThe swapped variables are %f & %f",a,b); // Final View after Swap

    getch();// Hold the program till the user presses a key
    return 0;
}