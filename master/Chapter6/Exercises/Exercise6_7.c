/*
 * Exercise6_7.c
 *
 * Solution to Exercise 7 of Chapter 6 in Kochan's "Programming in C".
 *
 * Chris Wolf
 *
 * chriswolfdesign@gmail.com
 */

// Program to generate a table of prime numbers

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int   p, d;
	bool isPrime;

	for(p = 2; p <= 50; ++p) {
		if(p % 2 == 0)
		{
			isPrime = false;
		}
		else
		{
			isPrime = true;
		}

		for(d = 2; d < p; ++d) {
			if(p % d == 0)
				isPrime = false;
			if(!isPrime)
				break;
		}
			
		if (isPrime != false)
			printf("%i ", p);
	}

	printf("\n");

	return 0;
}
