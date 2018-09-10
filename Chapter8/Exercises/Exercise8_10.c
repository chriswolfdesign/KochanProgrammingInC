/*
 * Exercise8_10.c
 *
 * Solution to Exercise 10 of Chapter 8 in Kochan's "Programming in C".
 *
 * Chris Wolf
 * chriswolfdesign@gmail.com
 */

#include <stdio.h>

// prototypes
int prime(int x);

int main(void)
{
	int x;
	printf("Enter a positive integer: ");
	scanf("%i", &x);

	printf("%i\n", prime(x));

	return 0;
}

/*
 * Returns 1 if a given number is prime; 0 otherwise
 *
 * param int x - the number we wish to know whether or not is prime
 *
 * return int - 1 if prime; 0 otherwise
 */
int prime(int x)
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
