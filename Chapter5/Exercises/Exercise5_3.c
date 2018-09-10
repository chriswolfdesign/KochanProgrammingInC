/*
 * Exercise5_3.c
 *
 * Solution to Exercise 3 of Chapter 5 in Kochan's "Programming in C".
 *
 * Chris Wolf
 * chriswolfdesign@gmail.com
 */

#include <stdio.h>

int main(void)
{
	printf("TABLE OF TRIANGULAR NUMBERS\n\n");
	printf("n     Triangular Number\n");
	printf("---   -----------------\n");

	for(int i = 5; i <= 50; i += 5)
	{
		printf("%2i          %2i\n", i, i * (i + 1) / 2);
	}

	return 0;
}
