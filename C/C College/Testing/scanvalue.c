#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i, input1 = 0, input2 = 0, input3 = 0;
    char c;
    float f;
    // printf("Enter an integer :");
    // input1=scanf("%d",&i);
    // printf("\nValue of scanf is :%d",input1);

    // printf("\nEnter an float :");
    // input2=scanf("%f",&f);
    // printf("\nValue of scanf is :%d",input2);

    while (1)
    {
        printf("\nEnter a char :");
        input3 = scanf("%c", &c);
        printf("\nValue of scanf is :%d", input3);
    }

    getch();
    return 0;
}