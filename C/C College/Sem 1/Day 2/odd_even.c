#include <stdio.h>
#include <conio.h>
//#include <math.h>
//#include <stdlib.h>
//#include <string.h>

int main()
{
    float number;
    int no;
    printf("Enter an integer except 0 ..... (Remember Decimal numbers and 0 can't be even or odd) ..... :");
    while(scanf("%f", &number) != 1 || (int)number!=number) // Input Validity checking
    {
        printf("\nInavlid Input ....follow the input Criteria and enter again :");
        fflush(stdin); // Clear the buffer
    }
    no = (int)number; // typecasting to integer value 
    if (no == 0) // zero check
    {
        printf("%d can't be specified into even or odd", no);
    }
    else if (no % 2 == 0) // even check
    {
        printf("%d is even. ", no);
    }
    else if (no % 2 != 0) // odd check
    {
        printf("%d is Odd. ", no);
    }

    getch(); // Hold the program till the user presses a key
    return 0;
}