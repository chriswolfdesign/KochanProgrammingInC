/*
 * Exercise7_4.c
 *
 * Solution to Exercise 4 of Chapter 7 in Kochan's "Programming in C".
 *
 * Chris Wolf
 * chriswolfdesign@gmail.com
 */

#include <stdio.h>

int main(void)
{
	int values[10];

	printf("Enter ten values.\n");

	for(int i = 0; i < 10; i++)
	{
		printf("Enter value #%i: ", i + 1);
		scanf("%i", &values[i]);
	}

	float total = 0;

	for(int i = 0; i < 10; i++)
	{
		total += values[i];
	}

	printf("Average: %.2f\n", total / 10);

	return 0;
}
