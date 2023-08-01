#include "lists.h"
/**
 * reverse_listint - The linked list is been reversed.
 * @head: The list pointer of the first node.
 * Return: The new node pointer.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *m = NULL;
	listint_t *r = NULL;

	while (*head)
	{
		r = (*head)->next;
		(*head)->next = m;
		m = *head;
		*head = r;
	}
	*head = m;
	return (*head);
}
