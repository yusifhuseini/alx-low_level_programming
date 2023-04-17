#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - point to free struct
 * @d: free pointer
 * Code by - yusifhuseini
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
