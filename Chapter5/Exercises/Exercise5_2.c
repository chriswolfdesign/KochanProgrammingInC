/*
 * Exercise5_2.c
 *
 * Solution to Exercise 2 of Chapter 5 in Kochan's "Programming in C".
 *
 * Chris Wolf
 * chriswolfdesign@gmail.com
 */

#include <stdio.h>

int main(void)
{
	printf("TABLE OF SQUARE NUMBERS\n\n");
	printf("n    n^2\n");
	printf("---  -----\n");

	for(int i = 1; i <= 10; i++)
	{
		printf("%2i   %3i\n", i, i * i);
	}

	return 0;
}
