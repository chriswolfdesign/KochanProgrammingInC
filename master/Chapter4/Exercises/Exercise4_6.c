/*
 * Exercise4_6.c
 *
 * Solution to Exercise 6 of Chapter 4 in Kochan's "Programming in C".
 *
 * Chris Wolf
 * chriswolfdesign@gmail.com
 */

#include <stdio.h>

int main(void)
{
	float x = 2.55;
	float result = (3 * x * x * x) - (5 * x * x) + 6;

	printf("3x^3 - 5x^2 + 6 = %f\n", result);

	return 0;
}
