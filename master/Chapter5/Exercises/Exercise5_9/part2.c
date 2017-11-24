/*
 * Exercise5_9 part2.c
 *
 * Solution to part 2 of Exercise 9 of Chapter 5 in Kochan's
 * "Programming in C".
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

	n = 1;

	while(n <= 10)
	{
		triangularNumber += n;
		printf("%2i        %i\n", n, triangularNumber);
		n++;
	}

	return 0;
}
