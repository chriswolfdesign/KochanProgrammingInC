/*
 * Exercise5_7.c
 *
 * Solution to Exercise 7 of Chapter 5 in Kochan's "Programming in C".
 *
 * Chris Wolf
 * chriswolfdesign@gmail.com
 */

#include <stdio.h>

int main(void)
{
	int dollars, cents, count;

	for(count = 1; count <= 10; ++count) {
		printf("Enter dollars: ");
		scanf("%i", &dollars);
		printf("Enter cents: ");
		scanf("%i", &cents);
		printf("$%i.%.2i\n\n", dollars, cents);
	}

	return 0;
}
