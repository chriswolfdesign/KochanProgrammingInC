/*
 * Exercise4_4.c
 *
 * Solution to Exercise 4 of Chapter 4 in Kochan's "Programming in C".
 *
 * Chris Wolf
 * chriswolfdesign@gmail.com
 */

#include <stdio.h>

int main(void)
{
	int   far = 27;
	float cel = (far - 32) / 1.8;

	printf("%i Farenheit = %f Celcius\n", far, cel);

	return 0;
}
