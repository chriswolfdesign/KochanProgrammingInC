/*
 * Part2.c
 *
 * Solution to Part 2 of Exercise 14 of Chapter 8 in Kochan's 
 * "Programming in C".
 *
 * Chris Wolf
 * chriswolfdesign@gmail.com
 */

#include <stdio.h>

// prototypes
int arraySum();

// global variables
int len;
int array[99];

int main(void)
{
	printf("How many integers will you be entering? (1 - 99) ");
	scanf("%i", &len);

	for(int i = 0; i < len; i++)
	{
		printf("Integer #%i: ", i + 1);
		scanf("%i", &array[i]);
	}

	printf("\n%i\n", arraySum(array, len));

	return 0;
}

/*
 * Returns the sum of all of the integers in the array
 *
 * param int array[] - the array of integers
 * param int len     - the length of the array
 *
 * return int - the sum of all of the integers in the array
 */
int arraySum()
{
	int total = 0;

	for(int i = 0; i < len; i++)
	{
		total += array[i];
	}

	return total;
}
