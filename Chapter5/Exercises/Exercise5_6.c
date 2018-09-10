/*
 * Exercise5_6.c
 *
 * Solution to Exercise 6 of Chapter 5 in Kochan's "Programming in C".
 *
 * Chris Wolf
 * chriswolfdesign@gmail.com
 */

// Program to generate a table of triangular numbers

#include <stdio.h>

int main(void)
{
	int n, triangularNumber;

	printf("TABLE OF TRIANGULAR NUMBERS\n\n");
	printf("n    Sum of 1 to n\n");
	printf("---  --------------\n");

	triangularNumber = 0;

	for (n = 1; n <= 10; ++n) {
		triangularNumber += n;
		printf("%-2i	    %i\n", n , triangularNumber);
	}

	return 0;
}
