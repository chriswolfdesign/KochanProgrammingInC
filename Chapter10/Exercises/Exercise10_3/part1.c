/*
 * part1.c
 *
 * Solution to part 1 of Exercise 3 of Chapter 10 in Kochan's
 * "Programming in C".
 *
 * Chris Wolf
 * chriswolfdesign@gmail.com
 */

// Function to determine if a character is alphabetic

#include <stdio.h>
#include <stdbool.h>

bool stillInWord (const char c)
{
	if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || 
			(c >= '0' && c <= '9') || c == ',' || c == '-' || c == '\''
			|| c == '.')
		return true;
	else
		return false;
}

/* Function to count the number of words in a string */

int countWords (const char string[])
{
	int i, wordCount = 0;
	bool lookingForWord = true, alphabetic (const char c);

	for ( i = 0; string[i] != '\0'; ++i )
		if ( stillInWord(string[i]) )
		{
			if ( lookingForWord )
			{
				++wordCount;
				lookingForWord = false;
			}
		}
		else
			lookingForWord = true;

	return wordCount;
}

int main (void)
{
	const char text1[] = "This sentence should have 6 words.";
	const char text2[] = "Pi is 3.14.  This sentence should have 9 words.";
	int countWords (const char string[]);

	printf ("%s - words = %i\n", text1, countWords (text1));
	printf ("%s - words = %i\n", text2, countWords (text2));

	return 0;
}
