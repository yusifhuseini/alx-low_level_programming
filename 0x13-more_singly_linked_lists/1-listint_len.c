#include "lists.h"

/**
 * listint_len - func len elements
 * @h: first node pointer
 * Code by - yusifhuseini
 * Return: elements num
*/
size_t listint_len(const listint_t *h)
{
	size_t elements = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		if (h->n != '\0')
			elements++;

		h = h->next;
	}

	return (elements);
}
