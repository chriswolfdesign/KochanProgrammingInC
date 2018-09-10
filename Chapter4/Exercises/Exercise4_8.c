/*
 * Exercise4_8.c
 *
 * Solution to Exercise 8 of Chapter 4 in Kochan's "Programming in C".
 *
 * Chris Wolf
 * chriswolfdesign@gmail.com
 */

#include <stdio.h>

int main(void)
{
	int i = 365;
	int j = 7;
	printf("The next common multiple of %i by %i is %i\n",
			i, j, i + j - i % j);

	i = 12258;
	j = 23;
	printf("The next common multiple of %i by %i is %i\n",
			i, j, i + j - i % j);

	i = 996;
	j = 4;
	printf("The next common multiple of %i by %i is %i\n",
			i, j, i + j - i % j);

	return 0;
}
