/*
 * Exercise8_2.c
 *
 * Solution to Exercise 2 of Chapter 8 in Kochan's "Programming in C".
 *
 * Chris Wolf
 * chriswolfdesign@gmail.com
 */

#include <stdio.h>

// prototypes
int triangularNumber(int n);

int main(void)
{
	int n, number, counter;

	for(counter = 1; counter <= 5; ++counter) {
		printf("What triangular number do you want? ");
		scanf("%i", &number);

		printf("Triangular number %i is %i\n\n", number, 
			   triangularNumber(number));
	}

	return 0;
}

/*
 * A function to return triangular numbers.
 *
 * param int n - the triangular number we are requesting
 *
 * return int - the solution to the triangular number we are requesting
 */
int triangularNumber(int n)
{
	int triangularNumber = 0;

	for(int i = 0; i < n; i++)
	{
		triangularNumber += i;
	}

	return triangularNumber;
}
