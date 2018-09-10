/*
 * Exercise6_6.c
 *
 * Solution to Exercise 6 of Chapter 6 in Kochan's "Programming in C".
 *
 * Chris Wolf
 * chriswolfdesign@gmail.com
 */

#include <stdio.h>

int main(void)
{
	int number, right_digit;
	int reversed_number = 0;

	printf("Enter your number: ");
	scanf("%i", &number);

	// Reverse the digits
	while (number > 0)
	{
		reversed_number *= 10;
		reversed_number += number % 10;
		number /= 10;
	}

	// Print the numbers digit by digit
	do
	{
		right_digit = reversed_number % 10;

		switch(right_digit)
		{
			case 1:
				printf("one ");
				break;
			case 2:
				printf("two ");
				break;
			case 3:
				printf("three ");
				break;
			case 4:
				printf("four ");
				break;
			case 5:
				printf("five ");
				break;
			case 6:
				printf("six ");
				break;
			case 7:
				printf("seven ");
				break;
			case 8:
				printf("eight ");
				break;
			case 9:
				printf("nine ");
				break;
			default:
				printf("zero ");
				break;
		}

		reversed_number /= 10;
	}
	while(reversed_number > 0);

	printf("\n");

	return 0;
}
