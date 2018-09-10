/*
 * Exercise10_5.c
 *
 * Solution to Exercise 5 of Chapter 10 in Kochan's "Programming in C".
 *
 * Chris Wolf
 * chriswolfdesign@gmail.com
 */

#include <stdio.h>
#include <stdbool.h>

// prototypes
bool equalStrings(const char s1[], const char s2[]);
void substring(char source[], int start, int count, char result[]);
int  stringLength(const char string[]);
int  findString(char string[], char search[]);

int main(void)
{
	int index = findString("a chatterbox", "hat");
	printf("%i\n", index);

	return 0;
}

/*
 * Function to determine if two strings are equal
 *
 * param const char s1[] - the first string to be compared
 * param const char s2[] - the second string to be compared
 *
 * return bool - true if the strings are equal; false otherwise
 */
bool equalStrings(const char s1[], const char s2[])
{
	int  i = 0;
	bool areEqual;

	while(s1[i] == s2[i] && s1[i] != '\0')
		++i;

	if(s1[i] == '\0' && s2[i] == '\0')
		areEqual = true;
	else
		areEqual = false;

	return areEqual;
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

/*
 * Function to determine the length of a character string
 *
 * param const char string[] - the string whose length we want to determine
 *
 * return int - the length of the given string
 */
int stringLength(const char string[])
{
	int count = 0;

	while(string[count] != '\0')
		++count;

	return count;
}

/*
 * Function to determine where a given substring begins in another given string
 * 
 * param const char string[] - the string where we hope to find a substring
 * param const char search[] - the string we are searching for
 *
 * return int - the index where the substring begins in the longer string;
 * -1 otherwise
 */
int findString(char string[], char search[])
{
	int substringLength = stringLength(search);
	char tmp[substringLength];

	for(int i = 0; string[i] != '\0'; i++)
	{
		substring(string, i, substringLength, tmp);

		if(equalStrings(search, tmp))
			return i;
	}

	return -1;
}
