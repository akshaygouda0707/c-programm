// C program to demonstrate use of variable
// in format specifier.
#include <stdio.h>

int main()
{
	float b = 6.412355;

	// using the format specifier %.*f
	// a = 3 will print value of b upto
	// 3 decimal places
	int a = 3;
	printf("%.*f\n", a, b);

	// a = 5 will print value of b upto
	// 3 decimal places
	a = 5;
	printf("%.*f\n", a, b);
	return 0;
}
