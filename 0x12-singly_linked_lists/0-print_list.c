#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints linked list elements
 * @h: print list_t lis pointer
 * Code by - yusifhuseini
 * Return: nodes values
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}
