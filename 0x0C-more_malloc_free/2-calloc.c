#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: no of element in array
 * @size: size of byte
 * Return: void
 * Code by - yusifhuseini
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *memory;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memory = malloc(nmemb * size);
	if (memory == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		*(memory + i) = 0;
	return ((void *)memory);
}
