/*
 * part2.c
 *
 * Solution to part 2 of Exercise 3 of Chapter 10 in Kochan's
 * "Programming in C".
 *
 * Chris Wolf
 * chriswolfdesign@gmail.com
 */

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

void readLine(char buffer[])
{
	char character;
	int i = 0;

	do
	{
		character = getchar();
		buffer[i] = character;
		++i;
	}
	while(character != '\n');

	buffer[i - 1] = '\0';
}

int main(void)
{
	char text[81];
	int  totalWords = 0;
	int  countWords(const char string[]);
	void readLine(char buffer[]);
	bool endOfText = false;

	printf("Type in your text.\n");
	printf("When you are done, press 'RETURN'.\n\n");

	while(!endOfText)
	{
		readLine(text);

		if(text[0] == '\0')
			endOfText = true;
		else
			totalWords += countWords(text);
	}

	printf("\nThere are %i words in the above text.\n", totalWords);

	return 0;
}
