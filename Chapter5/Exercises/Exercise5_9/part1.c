/*
 * Exercise5_9 part1.c
 *
 * Solution to the first part of Exercise 9 of Chapter 5 in Kochan's
 * "Programming in C".
 *
 * Chris Wolf
 * chriswolfdesign@gmail.com
 */

/*
 * Program to calculate the 200th triangular number
 * Introduction to the for statement
 */

#include <stdio.h>

int main(void)
{
	int n, triangularNumber;

	triangularNumber = 0;

	n = 1;

	while(n <= 200)
	{
		triangularNumber += n;
		n++;
	}

	printf("The 200th triangular number is %i\n", triangularNumber);

	return 0;
}
