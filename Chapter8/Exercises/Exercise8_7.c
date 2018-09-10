/*
 * Exercise8_7.c
 *
 * Solution to Exercise 7 of Chapter 8 in Kochan's "Programming in C".
 *
 * Chris Wolf
 * chriswolfdesign@gmail.com
 */

#include <stdio.h>

// prototypes
long int x_to_the_n(int x, int n);

int main(void)
{
	int x, n;

	printf("x: ");
	scanf("%i", &x);

	printf("n: ");
	scanf("%i", &n);

	printf("%i^%i = %li\n", x, n, x_to_the_n(x, n));

	return 0;
}

/*
 * Solves the equation x^n
 *
 * param int x - the base of the equation
 * param int n - the exponent of the equation
 *
 * return long int - x^n
 */
long int x_to_the_n(int x, int n)
{
	long int result = 1;

	for(int i = 0; i < n; i++)
	{
		result *= x;
	}

	return result;
}
