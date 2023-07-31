#include "lists.h"
/**
 * pop_listint - Linked lists of the head node gets deleted.
 * @head: The linked list of the frist elemt of the pointer.
 * Return: The elements of the data that been deleted or 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *y;
	int c;

	if (!head || !*head)
	return (0);

	c = (*head)->n;
	y = (*head)->next;
	free(*head);
	*head = y;
	return (c);
}
