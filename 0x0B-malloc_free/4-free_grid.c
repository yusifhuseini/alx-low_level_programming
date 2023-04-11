#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free a 2D array
 * Code by - yusifhuseini
 * @grid: 2D array to free
 * @height: height of the array
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; ++i)
		free(grid[i]);
	free(grid);
}
