/*
 * Exercise8_8.c
 *
 * Solution to Exercise 8 of Chapter 8 in Kochan's "Programming in C".
 *
 * Chris Wolf
 * chriswolfdesign@gmail.com
 */

#include <stdio.h>

float absoluteValue(float x);
float squareRoot(float x);
void  findRoots(float a, float b, float c);

int main(void)
{
	float a, b, c;

	printf("a: ");
	scanf("%f", &a);

	printf("b: ");
	scanf("%f", &b);
	
	printf("c: ");
	scanf("%f", &c);

	findRoots(a, b, c);

	return 0;
}

/*
 * Returns the absolute value of a given float
 * param float x - the number who's absolute value we are searching for
 *
 * return float - the absolute value of x
 */
float absoluteValue(float x)
{
	if(x < 0)
		x = -x;

	return x;
}

/*
 * Returns the square root of a given float
 *
 * param float x - the number who's square root we are searching for
 *
 * return float - the square root of x
 */
float squareRoot(float x)
{
	float epsilon = 0.00001;
	float       guess   = 1.0;

	while(absoluteValue(guess * guess - x) >= epsilon) 
		guess = (x / guess + guess) / 2.0;

	return guess;
}

/*
 * Prints the roots of a quadratic equation if they exist; 
 * Informs the user the roots are imaginary other wise
 *
 * param float a - the coefficient for the squared argument of the 
 * 				   quadric equation
 * param float b - the coefficient for the linear argument of the 
 *                 quadratic equation
 * param float c - the constant of the quadric equation
 *
 * return void
 */
void findRoots(float a, float b, float c)
{
	float imaginaryCheck = b * b - 4 * a * c;

	if(imaginaryCheck < 0)
	{
		printf("The roots of %gx^2 + %gx + %g are imaginary.\n", a, b, c);
		return ;
	}

	imaginaryCheck = squareRoot(imaginaryCheck);

	double firstRoot  = (-b + imaginaryCheck) / 2 * a; 
	double secondRoot = (-b - imaginaryCheck) / 2 * a; 

	printf("The roots of %gx^2 + %gx + %g are %g and %g\n", a, b, c,
			firstRoot, secondRoot);
}
