#include "lists.h"

/**
 * pop_listint - deletes head node
 * @head: first node list pointer
 * Code by - yusifhuseini
 * Return: node head (n)
*/
int pop_listint(listint_t **head)
{
	int first_node;
	listint_t *temp, *next;

	if (*head == NULL)
		return (0);

	temp = *head;
	next = temp->next;
	first_node = temp->n;

	free(temp);

	*head = next;

	return (first_node);
}
