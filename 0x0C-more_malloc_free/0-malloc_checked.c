#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: no. of byte to be allocated
 * Return: pointer to allocated memory or exit with 98
 * Code by - yusifhuseini
 **/

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
