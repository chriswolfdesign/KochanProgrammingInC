/*
 * Part3.c
 *
 * Solution to Part 3 of Exercise 12 of Chapter 8 in 
 * Kochan's "Programming in C".
 *
 * Chris Wolf
 * chriswolfdesign@gmail.com
 */

#include <stdio.h>

// prototypes
void transposeMatrix();

// global variables
int matrix[4][5];
int new_matrix[5][4];

int main(void)
{
	int counter = 1;
	
	// Initialize the matrix
	for(int i = 0; i < 4; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			matrix[i][j] = counter;
			counter++;
		}
	}

	printf("Before transposition.\n");

	for(int i = 0; i < 4; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			printf("%4i", matrix[i][j]);
		}
		printf("\n");
	}

	transposeMatrix(matrix, new_matrix);
	printf("\n");

	printf("After transposition.\n");

	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			printf("%4i", new_matrix[i][j]);
		}
		printf("\n");
	}

	return 0;
}

/*
 * Assigns a transposed version of matrix to new_matrix
 *
 * param int rows 			- the number of rows in the matrix
 * param int cols 			- the number of columns in the matrix
 * param int matrix[][]     - the matrix to be transposed
 * param int new_matrix[][] - the matrix to hold the new transposed matrix
 *
 * return void
 */
void transposeMatrix()
{
	for(int i = 0; i < 4; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			new_matrix[j][i] = matrix[i][j];
	
		}
	}
}
