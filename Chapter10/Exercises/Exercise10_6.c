/*
 * Exercise10_6.c
 *
 * Solution to Exercise 6 of Chapter 10 in Kochan's "Programming in C".
 *
 * Chris Wolf
 * chriswolfdesign@gmail.com
 */

#include <stdio.h>

// prototypes
void removeString(char string[], int start, int count);

int main(void)
{
	char text[] = "the wrong son";
	removeString(text, 4, 6);

	printf("%s\n", text);

	return 0;
}

/*
 * A function to remove a certain portion of a character string
 *
 * param char string[] - the string from which we are removing characters
 * int start - the starting index where we will begin removing characters
 * int count - the number of characters we wish to remove
 *
 * return void
 */
void removeString(char string[], int start, int count)
{
	int newWordCount = 0;

	for(int i = 0; string[i] != '\0'; i++)
	{
		if(i >= start && i < (start + count))
			continue;

		string[newWordCount] = string[i];
		newWordCount++;
	}

	string[newWordCount] = '\0';
}
