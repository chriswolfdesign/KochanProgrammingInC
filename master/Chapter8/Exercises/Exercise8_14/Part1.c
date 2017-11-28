/*
 * Part1.c
 *
 * Solution to Part 1 of Exercise 14 of Chapter 8 in 
 * Kochan's "Programming in C".
 *
 * Chris Wolf
 * chriswolfdesign@gmail.com
 */

#include <stdio.h>

// prototypes
int prime();

// global variable
int x;

int main(void)
{
	printf("Enter a positive integer: ");
	scanf("%i", &x);

	printf("%i\n", prime());

	return 0;
}

/*
 * Returns 1 if a given number is prime; 0 otherwise
 *
 * param int x - the number we wish to know whether or not is prime
 *
 * return int - 1 if prime; 0 otherwise
 */
int prime()
{
	for(int i = 2; i < x / 2; i++)
	{
		if(x % i == 0)
		{
			return 0;
		}
	}
	
	return 1; 
}
