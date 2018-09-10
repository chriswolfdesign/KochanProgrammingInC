/*
 * Part4.c
 *
 * Solution to Part 4 of Exercise 13 of Chapter 8 in Kochan's 
 * "Programming in C".
 *
 * Chris Wolf
 * chriswolfdesign@gmail.com
 */

// Program to sort an array of integers into ascending order

#include <stdio.h>
#include <stdbool.h>

int i;

int i;
int array[16] = {34, -5, 6, 0, 12, 100, 56, 22,
				 44, -3, -9, 12, 17, 22, 6, 11};
int n = 16;
bool ascending = true;
void sort();

void sort()
{
	int i, j, temp;

	for(i = 0; i < n - 1; ++i)
		for(j = i + 1; j < n; ++j)
			if(array[i] > array[j]) {
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}

	if(!ascending)
	{
		int temp[n];

		for(int i = 0; i < n; i++)
		{
			temp[i] = array[n - i - 1];
		}

		for(int i = 0; i < n; i++)
		{
			array[i] = temp[i];
		}
	}
}

int main(void)
{
	printf("The array before the sort:\n");

	for(i = 0; i < 16; ++i)
		printf("%i ", array[i]);

	sort();

	printf("\n\nThe array after ascending sort:\n");

	for(i = 0; i < 16; ++i)
		printf("%i ", array[i]);

	ascending = false;
	sort();

	printf("\n\nThe array after descending sort:\n");

	for(i = 0; i < 16; ++i)
		printf("%i ", array[i]);

	printf("\n");

	return 0;
}
