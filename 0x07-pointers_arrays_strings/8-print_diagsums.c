#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of square matrix of integers
 * @a: pointer to the first element of the matrix
 * @size: size of the matrix
 * Code by - yusifhuseini
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	/*Declaring variables*/
	int i;
	int sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	i = 0;
	while (i < size) /*number repetitions*/
	{
		/*sums for diagsums*/
		sum1 = sum1 + *(a + i * size + i);
		sum2 = sum2 + *(a + i * size + size - i - 1);

		i++; /*add +1*/
	}

	printf("%i, %i\n", sum1, sum2);

}
