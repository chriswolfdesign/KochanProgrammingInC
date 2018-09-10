/*
 * Exercise8_10.c
 *
 * Solution to Exercise 10 of Chapter 8 in Kochan's "Programming in C".
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
void removeString(char string[], int start, int count);
void insertString(char string[], char snippet[], int start);
void replaceString(char source[], char s1[], char s2[]);

int main(void)
{
	char text[100] = "There is 1 word in this sentence.";
	replaceString(text, "1", "one");

	printf("%s\n", text);

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

/*
 * Function to enter a given substring into another given string at a given
 * index
 *
 * param char string[]  - the original string to add characters into
 * param char snippet[] - the new characters to be added to the string
 * int start            - the index to add the snippet to the original string
 *
 * return void
 */
void insertString(char string[], char snippet[], int start)
{
	int index = 0;
	int snippetIndex = 0;
	int snippetLength = stringLength(snippet);
	char temp[50];

	// Copy our original string into a temporary variable
	for(int i = 0; string[i] != '\0'; i++)
	{
		temp[i] = string[i];
	}

	while(string[index] != '\0')
	{
		// Add the substring to our main string
		if(index == start)
		{
			while(snippetIndex < snippetLength)
			{
				string[index + snippetIndex] = snippet[snippetIndex];
				snippetIndex++;
			}
		}

		// Copy from the temporary variable to avoid overwritten characters
		string[index + snippetIndex] = temp[index];
		index++;
	}

	temp[index + snippetIndex] = '\0';
	string = temp;
}

/*
 * Function that will replace a given substring with another given substring
 * in a given string
 * NOTE -- This program does nothing if s1 can not be found in source
 *
 * param char source[] - the original string to be editied
 * param char s1[]     - the substring to be replaced
 * param char s2[]     - the substring that will replace s1
 *
 * return void
 */
void replaceString(char source[], char s1[], char s2[])
{
	int index     = findString(source, s1);
	int endOfWord = stringLength(source) - stringLength(s1) + stringLength(s2);

	if(index != -1)
	{
		removeString(source, index, stringLength(s1));
		insertString(source, s2, index);
		source[endOfWord] = '\0';
	}
}
