/*
 * Exercise5_11.c
 *
 * Solution to Exercise 11 of Chapter5 in Kochan's "Programming in C."
 *
 * Chris Wolf
 * chriswolfdesign@gmail.com
 */

#include <stdio.h>

int main(void)
{
	int number;

	printf("What number would you like? ");
	scanf("%i", &number);

	int result = 0;

	while(number > 0)
	{
		result += number % 10;
		number /= 10;
	}

	printf("%i\n", result);

	return 0;
}
