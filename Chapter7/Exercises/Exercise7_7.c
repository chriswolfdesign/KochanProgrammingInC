/*
 * Exercise7_7.c
 *
 * Solution to Exercise 7 of Chapter 7 in Kochan's "Programming in C".
 *
 * Chris Wolf
 * chriswolfdesign@gmail.com
 */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	bool primes[151];
	primes[0] = false;
	primes[1] = false;

	// initialize the array
	for(int i = 2; i < 150; i++)
	{
		primes[i] = true;
	}

	for(int i = 0; i < 150; i++)
	{
		if(primes[i])
		{
			for(int j = i + i; j < 150; j = j + i)
			{
				primes[j] = false;
			}
		}
	}

	for(int i = 0; i < 150; i++)
	{
		if(primes[i])
		{
			printf("%i ", i);
		}
	}

	printf("\n");

	return 0;
}
