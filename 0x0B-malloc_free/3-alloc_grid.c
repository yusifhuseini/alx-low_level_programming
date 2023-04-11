#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Create a multidimensional array
 * @width: array of width
 * @height: array of height
 * Code by - yusifhuseini
 * Return: array pointer or NULL.
 */

int **alloc_grid(int width, int height)
{
	int **matrix, i, j, fail;

	if (width <= 0 || height <= 0)
		return (NULL);
	matrix = (int **)malloc(height * sizeof(int *));
	if (matrix == NULL)
		return (NULL);

	fail = 0;
	for (i = 0; i < height; ++i)
	{
		matrix[i] = malloc(width * sizeof(int));
		if (matrix[i] == NULL)
		{
			fail = 1;
			break;
		}

		for (j = 0; j < width; ++j)
			matrix[i][j] = 0;
	}
	if (fail)
	{
		for (j = 0; j <= i; ++j)
			free(matrix[j]);
		free(matrix);
	}
	return (matrix);
}
