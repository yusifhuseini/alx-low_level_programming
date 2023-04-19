#include <stdlib.h>

/**
 * int_index - integer func
 * @array: array pointer
 * @size: array size
 * @cmp: func to compare array element
 * Return: cmp func or NULL
 * Code by - yusifhuseini
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp == NULL || array == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (; i < size; i++)
		if (cmp(array[i]))
			return (i);

	if (i == size)
		return (-1);

	return (-1);
}
