#include "lists.h"

/**
 * get_nodeint_at_index - function node nth linked list index
 *
 * @head: first node pointer
 * @index: num node access
 * Code by - yusifhuseini
 * Return: node index or NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
		head = head->next;

	return (head);
}
