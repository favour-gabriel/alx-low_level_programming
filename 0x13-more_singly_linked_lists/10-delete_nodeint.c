#include "lists.h"
/**
 * delete_nodeint_at_index - A certain linked list index delets the node.
 *@head: the linst first elements.
 * @index: the deleted index node.
 * Return: success 1 or a -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *y = *head;
	listint_t *cut = NULL;
	unsigned int q = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(y);
		return (1);
	}
	while (q < index - 1)
	{
		if (!y || !(y->next))
			return (-1);
		y = y->next;
		q++;
	}
	cut = y->next;
	y->next = cut->next;
	free(cut);
	return (1);
}
