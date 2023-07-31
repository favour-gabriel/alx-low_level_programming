#include "lists.h"
/**
 * add_nodeint_end -Puts the node of the linked list at the end.
 * @head: The list containing the pointer's first elements.
 * @n: To insert the first element of the data.
 * Return: The node pointer or NULL .
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *x;
	listint_t *y = *head;

	x = malloc(sizeof(listint_t));
	if (!x)
		return (NULL);
	x->n = n;
	x->next = NULL;
	if (*head == NULL)
	{
		*head = x;
		return (x);
	}

	while (y->next)
		y = y->next;

	y->next = x;
	return (x);
}
