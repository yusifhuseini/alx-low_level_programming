#include "main.h"
#include <stdlib.h>

/**
 * *_realloc -  reallocates a mem block using malloc
 * @ptr: point to previous mem
 * @old_size: already allocated size for ptr
 * @new_size: new byte to allocate
 * Return: pointer to newly allocated memory or NULL
 * Code by - yusifhuseini
 **/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned char *np;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size * sizeof(void *));
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	np = malloc(new_size * sizeof(char));
	if (np == NULL)
		return (NULL);
	i = 0;
	if (new_size > old_size)
	{
		while (i < old_size)
		{
			np[i] = ((char *)ptr)[i];
			i++;
		}
		free(ptr);
		return (np);
	}
/* if new_size < old_size */
	while (i < new_size)
	{
		np[i] = ((char *)ptr)[i];
		i++;
	}
	free(ptr);
	return (np);
}
