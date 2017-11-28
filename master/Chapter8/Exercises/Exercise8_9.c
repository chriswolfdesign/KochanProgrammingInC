/*
 * Exercise8_9.c
 *
 * Solution to Exercise 9 of Chapter 8 in Kochan's "Programming in C".
 *
 * Chris Wolf
 * chriswolfdesign@gmail.com
 */

#include <stdio.h>

// prototypes
int gcd(int u, int v);
int lcm(int u, int v);

int main(void)
{
	int u, v;

	printf("Enter first integer: ");
	scanf("%i", &u);

	printf("Enter second integer: ");
	scanf("%i", &v);

	printf("The least common multiple of %i and %i is %i\n", u, v, lcm(u, v));
}

/*
 * Returns the greatest common divisor of two integers
 *
 * param int u - the first integer
 * param int v - the second integer
 *
 * return int - the greatest common divisor of u and v
 */
int gcd(int u, int v)
{
	int temp;

	while(v != 0) {
		temp = u % v;
		u = v;
		v = temp;
	}

	return u;
}

/*
 * Returns the least common multiple of two integers
 *
 * param int u - the first integer
 * param int v - the second integer
 *
 * return int - the least common multiple of u and v
 */
int lcm(int u, int v)
{
	return u * v / gcd(u, v);
}
