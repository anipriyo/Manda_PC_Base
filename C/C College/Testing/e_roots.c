#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, d, x1, x2,t;
    printf("Enter the coefficient of x^2=");
    scanf("%f", &a);
    printf("\nEnter the coefficient of x=");
    scanf("%f", &b);
    printf("\nEnter the coefficient independent of x=");
    scanf("%f", &c);
    float real, imaginary;
    if (a != 0)
    {
        d = (b * b) - (4 * a * c);
        if (d > 0)
        {
            x1 = (-b + sqrt(d)) / (2 * a);
            x2 = (-b - sqrt(d)) / (2 * a);
            printf("\n Both roots are distinct");
            printf("\n The roots are %f & %f", x1, x2);
        }
        else if (d == 0)
        {
            float er=((-b) / (2 * a));
            printf("\nRoots are equal with value %f", er);
        }
        else if(d<0)
        {
            printf("\nThe roots are imaginary");
            real = (-b) / (2 * a);
            imaginary = sqrt(-d) / (2 * a);
            printf("\nThe solutions are %f+i%f  and  %f-i%f", real, imaginary,real, imaginary);
        }
    }
    else if (a==0)
    {
        t = (-c/b);
		printf("\nThe root is : %f", t);
    }
    

    return 0;
}