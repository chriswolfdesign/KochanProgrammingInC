/*
 * Exercise10_11.c
 *
 * Solution to Exercise 11 of Chapter 10 in Kochan's "Programming in C".
 *
 * Chris Wolf
 * chriswolfdesign@gmail.com
 */

// Function to convert a string to an integer

#include <stdio.h>
#include <stdbool.h>

int strToInt(const char string[])
{
	int i = 0, intValue, result = 0;
	bool isNegative;

	if(string[i] == '-')
	{
		isNegative = true;
		i = 1;
	}

	for(;string[i] >= '0' && string[i] <= '9'; ++i)
	{
		intValue = string[i] - '0';
		result = result * 10 + intValue;
	}
	
	if(isNegative)
	{
		result *= -1;
	}

	return result;
}

int main(void)
{
	int strToInt(const char string[]);

	printf("%i\n", strToInt("-245"));
	printf("%i\n", strToInt("100") + 25);
	printf("%i\n", strToInt("13x5"));

	return 0;
}
