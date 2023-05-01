#include "lists.h"

/**
 * free_listint2 - function free list
 * @head: first node pointer
 * Code by - yusifhuseini
 * Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	if (head != NULL)
	{
		current = *head;

		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}

		*head = NULL;
	}
}
