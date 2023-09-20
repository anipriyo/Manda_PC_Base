#include <stdio.h>
#include <conio.h>
int main()
{
    int x, y;   // operation variables
    float a, b; // Temp variables for checking
    printf("Enter 2 numbers : ");
    while (scanf("%f %f", &a, &b) != 2 || a == b || a == 0 || b == 0 || (int)a != a || (int)b != b) // checking input validity
    {
        printf("\nNo characters , decimals , 0 or equal inputs... Try again : ");
        fflush(stdin); // Clearing input Buffer
    }
    y = (int)b; // typecasting temp variables into integral operation variables
    x = (int)a;
    printf("\nThe inserted variables are %d & %d", x, y); // Preview

    // Swapping With XOR
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

    // // Swapping With * & /
    // x = x * y;
    // y = x / y;
    // x = x / y;

    printf("\nThe swapped variables are %d & %d", x, y); // Final View after Swap
    getch();                                             // Hold the program till the user presses a key
    return 0;
}