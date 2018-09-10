/*
 * Exercise3_4.c
 *
 * Solution to Exercise 4 of Chapter 3 in Kochan's "Programming in C".
 *
 * Chris Wolf
 * chriswolfdesign@gmail.com
 */

#include <stdio.h>

int main(void)
{
	int value1, value2, difference;

	value1 = 87;
	value2 = 15;
	difference = value1 - value2;

	printf("The difference between %i and %i is %i\n", value1, value2, 
		difference);

	return 0;
}
