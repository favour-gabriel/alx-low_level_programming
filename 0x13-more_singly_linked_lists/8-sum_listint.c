#include "lists.h"
/**
 * sum_listint - The listint_t list data is been calculated.
 * @head: The linked list first node.
 * Return: Overall outcome.
 */
int sum_listint(listint_t *head)
{
	int q = 0;
	listint_t *y = head;

	while (y)
	{
		q += y->n;
		y = y->next;
	}
	return (q);
}
