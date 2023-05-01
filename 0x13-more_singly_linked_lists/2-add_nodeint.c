#include "lists.h"

/**
 * add_nodeint - a function add new node
 * @head: first node pointer
 * @n: add int n to new node
 * Code by - yusifhuseini
 * Return: address or NULL
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;

	new_node->n = n;
	*head = new_node;

	return (*head);
}
