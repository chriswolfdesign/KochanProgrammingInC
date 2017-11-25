/*
 * Exercise6_2.c
 *
 * Solution to Exercise 2 of Chapter 6 in Kochan's "Programming in C".
 *
 * Chris Wolf
 * chriswolfdesign@gmail.com
 */

#include <stdio.h>

int main(void)
{
	int value1, value2;
	printf("Insert two integer values: ");
	scanf("%i %i", &value1, &value2);

	if(value1 % value2 == 0)
	{
		printf("%i is evenly divisible by %i.\n", value1, value2);
	}
	else
	{
		printf("%i is not evenly divisible by %i.\n", value1, value2);
	}

	return 0;
}
