// WAP to show the roots of a quadratic equation
#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
	float t, d, r1, r2, real, img, a, b, c;
	printf("\n Enter the Value of  a , b & c  for the Quadratic Equation ax^2 + bx + c = 0 : ");
	scanf("%f %f %f", &a, &b, &c);
	if (a == 0) // single root
	{
		printf("\nEquation recieved :%.3fx + %.3f = 0", b, c);
		t = (-c / b);
		printf("\nThe root is : %.3f", t);
	}
	else // usual case
	{
		printf("\nEquation recieved : %.3fx^2 + %.3fx + %.3f = 0", a, b, c);
		d = (b * b - 4 * a * c);				  // Determinant
		printf("\nThe Determinant is : %.3f", d); // %.3f is an iteration of the format specifier to print upto 3 decimal spaces
		if (d > 0)								  // Real Roots
		{

			r1 = ((-b) + (sqrt(d))) / (2 * a);
			r2 = ((-b) - (sqrt(d))) / (2 * a);
			printf("\nThe 1st root is :%.3f", r1);
			printf("\nThe 2nd root is :%.3f", r2);
		}
		else // Imaginary Roots
		{
			real = -(b / (2 * a));
			img = (sqrt(-d) / (2 * a));

			printf("\nThe 1st root is :%.3f + %.3fi", real, img);
			printf("\nThe 2nd root is :%.3f - %.3fi", real, img);
		}
	}
	getch(); // used to pause the execution of a program until the user enters a key.
	return 0;
}
