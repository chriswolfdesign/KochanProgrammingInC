/*
 * Exercise5_4.c
 *
 * Solution to Exercise 4 of Chapter 5 in Kochan's "Programming in C".
 *
 * Chris Wolf
 * chriswolfdesign@gmail.com
 */

#include <stdio.h>

int main(void)
{
	int fact = 1;
	printf("TABLE OF FACTORIALS\n\n");
	printf("n     n!\n");
	printf("---  ---\n");

	for(int i = 1; i <= 10; i++)
	{
		fact *= i;
		printf("%2i    %i\n", i, fact);
	}

	return 0;
}
