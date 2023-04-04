#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Computes the sum of the diagonals of a square matrix
 *
 * @a: The matrix to compute the diagonal sums for
 * @size: The size of the matrix
 *
 * Return: Nothing.
 * Code by - yusifhuseini
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;

	for (int i = 0; i < size; i++)
	{
		/* Compute diagonal sums */
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + size - i - 1);
	}

	printf("%i, %i\n", sum1, sum2);
}
