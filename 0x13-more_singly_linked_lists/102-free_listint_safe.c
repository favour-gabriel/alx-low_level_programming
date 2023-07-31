#include "lists.h"
/**
 * free_listint_safe - The linked lists is been released.
 * @h: The linked list fist node pointer.
 * Return: The released list elements.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t l = 0;
	int d;
	listint_t *y;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		d = *h - (*h)->next;
		if (d > 0)
		{
			y = (*h)->next;
		free(*h);
		*h = y;
		l++;
		}
		else
		{
		free(*h);
	*h = NULL;
l++;
break;
		}
	}
	*h = NULL;
	return (l);
}
