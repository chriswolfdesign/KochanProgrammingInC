/*
 * Exercise5_8.c
 *
 * Solution to Exercise 8 of Chapter 5 in Kochan's "Programming in C".
 *
 * Chris Wolf
 * chriswolfdesign@gmail.com
 */

#include <stdio.h>

int main(void)
{
	int n, number, triangularNumber, counter;

	printf("How many triangular numbers would you like? ");
	scanf("%i", &counter);

	for(int i = 1; i <= counter; ++i) {
		printf("What triangular number do you want? ");
		scanf("%i", &number);

		triangularNumber = 0;

		for(n = 1; n <= number; ++n)
			triangularNumber += n;

		printf("Triangular number %i is %i\n\n", number, triangularNumber);
	}

	return 0;
}
