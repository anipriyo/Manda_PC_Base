#include <stdio.h>
#include <conio.h>
#include <math.h>
// #include<stdlib.h>
// #include<string.h>

int main()
{
    float x, y; // Variable Declaration
    int n, l;
    printf("Enter the limit(n) for printing armstrong numbers : ");
    while (scanf("%f %f", &x, &y) != 2 || (int)x != x || (int)y != y || x >= y) // Checking input Validity
    {
        printf("\nInvalid input... Try again : ");
        fflush(stdin); // Clearing input Buffer
    }
    n = (int)y; // typecasting temp variables into integral operation variables
    l = (int)x;
    printf("\nThe Armstrong Numbers from 1 to n are : ");
    for (int i = l; i <= n; i++) // loop from 1 to n
    {
        if (i == 0)
        {
            continue;
        }
        else
        {
            int counter = 0, r, copy = i, check = i, sum = 0;
            while (i != 0) // Digit count
            {
                i /= 10;
                counter++;
            }
            while (copy != 0) // Armstrong Calculation
            {
                r = copy % 10;
                sum = sum + pow(r, counter);
                copy /= 10;
            }
            if (sum == check) // Armstrong
            {
                printf("%d ", check);
            }
            i = check;
        }
    }

    getch();
    return 0;
}