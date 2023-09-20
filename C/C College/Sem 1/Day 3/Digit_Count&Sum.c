#include<stdio.h>
#include<conio.h>
// #include<math.h>
// #include<stdlib.h>
// #include<string.h>
int main(){
    float x; // Variable Declaration
    int n,r,sum=0,counter=0;
    printf("Enter a numbers :");
    while (scanf("%f", &x) != 1 || (int)x != x || x==0) // Checking input Validity
    {
        printf("\nInvalid input.. Don't enter character , float or 0... Try again : ");
        fflush(stdin); // Clearing input Buffer
    }
    n = (int)x; // typecasting temp variables into integral operation variables

    while (n!=0)
    {
        r=n%10;
        counter++;
        n/=10;
        sum+=r;
    }
    
    printf("\nThere are %d Digits with a sum of %d",counter,sum);
    
    getch();// Hold the program till the user presses a key
    return 0;
}