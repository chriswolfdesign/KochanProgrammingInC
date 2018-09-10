/*
 * Exercise10_2.c
 *
 * Solution to Exercise 2 in Chapter 10 of Kochan's "Programming in C".
 *
 * Chris Wolf
 * chriswolfdesign@gmail.com
 */

// Function to determine if two strings are equal

#include <stdio.h>
#include <stdbool.h>

bool equalStrings(const char s1[], const char s2[])
{
	int  i = 0;
	bool areEqual;

	/*
	 * This edit works because it really isn't any consequence
	 * what the current character of s2 is.
	 * If it is the same as s1, and is the end of the string, our
	 * second condition will catch it anyway.
	 */
	while(s1[i] == s2[i] && s1[i] != '\0')
		++i;

	if(s1[i] == '\0' && s2[i] == '\0')
		areEqual = true;
	else
		areEqual = false;

	return areEqual;
}

int main(void)
{
	bool equalStrings(const char s1[], const char s2[]);
	const char stra[] = "string compare text";
	const char strb[] = "string";

	printf("%i\n", equalStrings(stra, strb));
	printf("%i\n", equalStrings(stra, stra));
	printf("%i\n", equalStrings(strb, "string"));

	return 0;
}
