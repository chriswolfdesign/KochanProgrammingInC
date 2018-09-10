/*
 * Exercise4_7.c
 *
 * Solution to Exercise 7 of Chapter 4 in Kochan's "Programming in C".
 *
 * Chris Wolf
 * chriswolfdesign@gmail.com
 */

#include <stdio.h>

int main(void)
{
	double result1 = (3.31 * 10e-8 * 2.01 * 10e-7);
	double result2 = (7.16 * 10e-6 + 2.01 * 10e-8);
	double result3 = result1 / result2;

	printf("(3.31 * 10^-8 * 2.01 * 10^-7) / ");
	printf("(7.16 * 10^-6 + 2.01 * 10^-8) = %g\n", result3);

	return 0;
}
