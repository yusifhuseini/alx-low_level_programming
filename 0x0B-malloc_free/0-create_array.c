#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific character
 * @size: size of the array to be created
 * @ch: character to initialize the array with
 * Code by - yusifhuseini
 * Return: pointer to the newly created array, or
 * NULL if size is less than 1 or if memory allocation fails
 */

char *create_array(unsigned int size, char ch)
{
	char *array;
	unsigned int i;

	if (size < 1)
		return (NULL);
	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; ++i)
		*(array + i) = ch;
	return (array);
}
