/*
 * Exercise8_13.c
 *
 * Solution to Exercise 13 of Chapter 8 in Kochan's "Programming in C".
 *
 * Chris Wolf
 * chriswolfdesign@gmail.com
 */

// Program to sort an array of integers into ascending order

#include <stdio.h>
#include <stdbool.h>

void sort(int a[], int n, bool ascending)
{
	int i, j, temp;

	for(i = 0; i < n - 1; ++i)
		for(j = i + 1; j < n; ++j)
			if(a[i] > a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}

	if(!ascending)
	{
		int temp[n];

		for(int i = 0; i < n; i++)
		{
			temp[i] = a[n - i - 1];
		}

		for(int i = 0; i < n; i++)
		{
			a[i] = temp[i];
		}
	}
}

int main(void)
{
	int i;
	int array[16] = {34, -5, 6, 0, 12, 100, 56, 22,
					 44, -3, -9, 12, 17, 22, 6, 11};
	void sort(int a[], int n, bool ascending);

	printf("The array before the sort:\n");

	for(i = 0; i < 16; ++i)
		printf("%i ", array[i]);

	sort(array, 16, true);

	printf("\n\nThe array after ascending sort:\n");

	for(i = 0; i < 16; ++i)
		printf("%i ", array[i]);

	sort(array, 16, false);

	printf("\n\nThe array after descending sort:\n");

	for(i = 0; i < 16; ++i)
		printf("%i ", array[i]);

	printf("\n");

	return 0;
}
