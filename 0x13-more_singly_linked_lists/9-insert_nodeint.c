#include "lists.h"
/**
 * insert_nodeint_at_index - In the linked list we will insert a new node.
 *@head: The list of the node pointer.
*@idx: The added new node index.
* @n: The new node inserted data.
* Return: The new node pointer or a NULL.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int t;
	listint_t *x;
	listint_t *y = *head;

	x = malloc(sizeof(listint_t));
	if (!x || !head)
		return (NULL);

	x->n = n;
	x->next = NULL;

	if (idx == 0)
	{
		x->next = *head;
		*head = x;
		return (x);
	}

	for (t = 0; y && t < idx; t++)
	{
		if (t == idx - 1)
		{
			x->next = y->next;
			y->next = x;
			return (x);
		}
		else
			y = y->next;
	}
	return (NULL);
}
