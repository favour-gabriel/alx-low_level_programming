#include "lists.h"
/**
 * free_listint2 - A linked lists released.
 * @head: The listint_t pointer to be released.
 */
void free_listint2(listint_t **head)
{
	listint_t *y;

	if (head == NULL)
		return;
	while (*head)
	{
		y = (*head)->next;
		free(*head);
		*head = y;
	}
	*head = NULL;
}
