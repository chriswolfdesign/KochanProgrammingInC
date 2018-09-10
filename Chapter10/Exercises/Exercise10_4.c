/*
 * Exercise10_4.c
 *
 * Solution to Exercise 4 of Chapter 10 in Kochan's "Programming in C".
 *
 * Chris Wolf
 * chriswolfdesign@gmail.com
 */

#include <stdio.h>

// prototypes
void substring(char source[], int start, int count, char result[]);

int main(void)
{
	char result[100];
	char source[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', '\0'};

	printf("First test: ");
	substring(source, 2, 3, result);
	int i = 0;

	while(result[i] != '\0')
	{
		printf("%c", result[i]);
		i++;
	}

	printf("\n");

	printf("Second Test: ");
	substring(source, 3, 4, result);
	i = 0;

	while(result[i] != '\0')
	{
		printf("%c", result[i]);
		i++;
	}

	printf("\n");

	return 0;
}

/*
 * Function to return a sub-section of a string.
 * If the user requests a longer substring than is available, we will simply
 * return to the end of the string
 *
 * param char[] source - the original string we are splicing from
 * param int start - the first index where we will begin our substring
 * param int end - the last index where we will end our substring
 * NOTE -- If end is out of bounds, we will stop at the end of the string
 * param char[] result - the string variable we will hold our substring in
 *
 * return void
 */
void substring(char source[], int start, int count, char result[])
{
	int charsTaken = 0;

	for(int i = start; source[i] != '\0'; i++)
	{
		result[charsTaken] = source[i];
		charsTaken++;

		if(charsTaken == count)
		{
			break;
		}
	}

	result[charsTaken] = '\0';
}
