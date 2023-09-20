#include <stdio.h>

int main() {
    int a;
    float float_input;

    printf("Enter an integer: ");
    while (scanf("%f", &float_input) != 1 || (int)float_input != float_input) {
        printf("Invalid input. Please enter an integer: ");
        //while (getchar() != '\n');  // Clear the input buffer
        fflush(stdin);
    }
    a = (int)float_input;
    
    printf("You entered: %d\n", a);
    return 0;
}