#include "lists.h"

/**
 * free_listint - free list
 * @head: list node pointer
 * Code by - yusifhuseini
 * Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *current;

	/*iterate through each node in list*/
	while ((current = head) != NULL)
	{
		/*set head as the next node*/
		head = head->next;
		free(current);
	}
}
