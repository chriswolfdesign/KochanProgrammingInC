/*
 * Exercise7_6.c
 *
 * Solution to Exercise 6 of Chapter 7 in Kochan's "Programming in C".
 *
 * Chris Wolf
 * chriswolfdesign@gmail.com
 */

// Program to generate the first 15 Fibonacci numbers

#include <stdio.h>

int main(void)
{
	int fib1, fib2, fib3;

	fib1 = 0;
	fib2 = 1;

	printf("0\n1\n");

	for(int i = 2; i < 15; i++)
	{
		fib3 = fib1 + fib2;
		printf("%i\n", fib3);
		fib1 = fib2;
		fib2 = fib3;
	}

	return 0;

}
