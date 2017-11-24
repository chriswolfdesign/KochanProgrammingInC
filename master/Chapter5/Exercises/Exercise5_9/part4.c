/*
 * Exercise5_9 part4.c
 *
 * Solution to part 4 of Exercise 9 in Chapter 5 in Kochan's
 * "Programming in C".
 *
 * Chris Wolf
 * chriswolfdesign@gmail.com
 */

#include <stdio.h>

int main(void)
{
	int n, number, triangularNumber, counter;

	counter = 1;

	while(counter <= 5)
	{
		printf("What triangular number do you want? ");
		scanf("%i", &number);

		triangularNumber = 0;

		n = 1;

		while(n <= number)
		{
			triangularNumber += n;
			n++;
		}

		printf("Triangular number %i is %i\n\n", number, triangularNumber);

		counter++;
	}

	return 0;
}
