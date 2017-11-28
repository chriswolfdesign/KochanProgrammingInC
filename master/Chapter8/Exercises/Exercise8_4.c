/*
 * Exercise8_4.c
 *
 * Solution to Exercise 4 of Chapter 8 in Kochan's "Programming in C".
 *
 * Chris Wolf
 * chriswolfdesign@gmail.com
 */

// Function to calculate the absolute value of a number

#include <stdio.h>

float absoluteValue(float x)
{
	if(x < 0)
		x = -x;

	return x;
}

// Function to compute the square root of a number

float squareRoot(float x)
{
	const float epsilon = 0.00001;
	float       guess   = 1.0;

	while(absoluteValue(guess * guess - x) >= epsilon) { 
		guess = (x / guess + guess) / 2.0;
		printf("%f\n", guess);
	}

	return guess;
}

int main(void)
{
	printf("squareRoot(2.0) = %f\n", squareRoot(2.0));
	printf("squareRoot(144.0) = %f\n", squareRoot(144.0));
	printf("squareRoot(17.5) = %f\n", squareRoot(17.5));

	return 0;
}
