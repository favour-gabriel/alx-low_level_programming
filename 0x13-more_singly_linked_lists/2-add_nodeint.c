#include "lists.h"
/**
 * add_nodeint - Puts new node linked lists at the beginning.
 * @head: There will be a pointer on the first node.
 * @n: Insert data to the new node.
 * Return: The pointer to the node or it will be Null.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *b;

	b = malloc(sizeof(listint_t));
	if (!b)
		return (NULL);
	b->n = n;
	b->next = *head;
	*head = b;
	return (b);
}
