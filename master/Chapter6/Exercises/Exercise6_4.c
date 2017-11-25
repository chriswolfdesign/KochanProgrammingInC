/*
 * Exercise6_4.c
 *
 * Solution to Exercise 4 of Chapter 6 in Kochan's "Programming in C".
 *
 * Chris Wolf
 * chriswolfdesign@gmail.com
 */

#include <stdio.h>

int main(void)
{
	printf("Begin calculations\n");
	
	float result = 0.0;
	char  operator = 'c';
	float value;

	while(operator != 'E')
	{
		scanf("%f %c", &value, &operator);

		switch(operator)
		{
			case '+':
				result += value;
				printf("= %f\n", result);
				break;
			case '-':
				result -= value;
				printf("= %f\n", result);
				break;
			case '*':
				result *= value;
				printf("= %f\n", result);
				break;
			case '/':
				if(value == 0)
				{
					printf("Division by zero.\n");
				}
				else
				{
					result /= value;
				}
				printf("= %f\n", result);
				break;
			case 'S':
				result = value;
				printf("= %f\n", value);
				break;
			case 'E':
				printf("= %f\n", value);
				printf("End of calculations.\n");
				break;
			default:
				printf("Unknown operator.\n");
				printf("= %f\n", value);
				break;
		}
	}

	return 0;
}
