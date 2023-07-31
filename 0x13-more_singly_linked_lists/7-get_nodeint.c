#include "lists.h"
/**
 * get_nodeint_at_index - A linked list index ata cerain node returns.
 * @head: The linked list in the first node.
 * @index: The return of the index node.
 * Return: We are looking for the node pointer or NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int p = 0;
	listint_t *y = head;

	while (y && p < index)
	{
		y = y->next;
		p++;
	}
	return (y ? y : NULL);
}
