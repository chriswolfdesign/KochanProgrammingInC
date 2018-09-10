/*
 * Exercise10_7.c
 *
 * Solution to Exercise 7 of Chapter 10 in Kochan's "Programming in C".
 *
 * Chris Wolf
 * chriswolfdesign@gmail.com
 */

#include <stdio.h>

// prototypes
int stringLength(const char string[]);
void insertString(char string[], char snippet[], int start);

int main(void)
{
	char text[50] = "the wrong son";
	insertString(text, "per", 10);

	printf("%s\n", text);

	return 0;
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

