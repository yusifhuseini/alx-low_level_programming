#include "lists.h"

/**
 * sum_listint - function list sum data (n)
 * @head: first node pointer
 * Code by - yusifhuseini
 * Return: sum (n)
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
