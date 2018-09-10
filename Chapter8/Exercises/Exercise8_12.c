/*
 * Exercise8_12.c
 *
 * Solution to Exercise 12 of Chapter 8 in Kochan's "Programming in C".
 *
 * Chris Wolf
 * chriswolfdesign@gmail.com
 */

#include <stdio.h>

// prototypes
void displayMatrix(int rows, int cols, int matrix[rows][cols]);
void transposeMatrix(int rows, int cols, int matrix[rows][cols],
					 int new_matrix[cols][rows]);

int main(void)
{
	int matrix[4][5];
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
	displayMatrix(4, 5, matrix);

	int new_matrix[5][4];
	transposeMatrix(4, 5, matrix, new_matrix);
	printf("\n");

	printf("After transposition.\n");
	displayMatrix(5, 4, new_matrix);

	return 0;
}

/*
 * Prints the matrix given onto the terminal
 *
 * param int rows       - the number of rows in the matrix
 * param int cols       - the number of columns in the matrix
 * param int matrix[][] - the matrix to be printed
 *
 * return void
 */
void displayMatrix(int rows, int cols, int matrix[rows][cols])
{
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < cols; j++)
		{
			printf("%4i", matrix[i][j]);
		}
		printf("\n");
	}
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
void transposeMatrix(int rows, int cols, int matrix[rows][cols],
		            int new_matrix[cols][rows])
{
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < cols; j++)
		{
			new_matrix[j][i] = matrix[i][j];
	
		}
	}
}
