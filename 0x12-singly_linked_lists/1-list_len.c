#include <stdlib.h>
#include "lists.h"

/**
 * list_len - prints linked len elements
 * @h: print list_t lis pointer
 * Code by - yusifhuseini
 * Return: elements values
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
