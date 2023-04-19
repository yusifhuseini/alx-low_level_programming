#include <stdlib.h>

/**
 * array_iterator - func exe func pointing
 * @array: array pointer
 * @size: array size
 * @action: fumc to iterate array
 * Return: void
 * Code by - yusifhuseini
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action == NULL || array == NULL)
		return;

	for (; i < size; i++)
		action(array[i]);
}
