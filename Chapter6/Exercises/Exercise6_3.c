/*
 * Exercise6_3.c
 *
 * Solution to Exercise 3 of Chapter 6 in Kochan's "Programming in C".
 *
 * Chris Wolf
 * chriswolfdesign@gmail.com
 */

#include <stdio.h>

int main(void)
{
	int value1, value2;
	printf("Enter two integer values: ");
	scanf("%i %i", &value1, &value2);

	printf("%i divided by %i is %.3f.\n", value1, value2, 
		(float) value1 / value2);

	return 0;
}
