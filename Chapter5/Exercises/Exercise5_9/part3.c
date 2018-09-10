/*
 * Exercise5_9 part3.c
 *
 * Solution to part 3 of Exercise 9 of Chapter 5 in Kochan's
 * "Programming in C".
 *
 * Chris Wolf
 * chriswolfdesign@gmail.com
 */

#include <stdio.h>

int main(void)
{
	int n, number, triangularNumber;

	printf("What triangular number do you want? ");
	scanf("%i", &number);

	triangularNumber = 0;

	n = 1;

	while(n <= number)
	{
		triangularNumber += n;
		n++;
	}

	return 0;
}
