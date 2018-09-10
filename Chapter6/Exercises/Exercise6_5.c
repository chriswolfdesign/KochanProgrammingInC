/*
 * Exercise6_5.c
 *
 * Solution to Exercise 5 of Chapter 6 in Kochan's "Programming in C".
 *
 * Chris Wolf
 * chriswolfdesign@gmail.com
 */

// Program to reverse the digits of a number

#include <stdio.h>
#include <stdbool.h>

int main () {
	int number, right_digit;
	bool is_negative;

	printf ("Enter your number.\n"); scanf ("%i", &number);

	if(number < 0 )
	{
		is_negative = true;
		number *= -1;
	}
	else
	{
		is_negative = false;
	}
	
	do {
		right_digit = number % 10; 
		printf ("%i", right_digit); 
		number = number / 10;
	}
	while ( number != 0 );

	if(is_negative)
	{
		printf("-");
	}

	printf ("\n");
}
