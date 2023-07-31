#include "lists.h"
/**
 * listint_len - Return the linked lists elements.
 * @h: Type listint_t to traversed linked lists.
 * Return: The nodes numbers.
 */
size_t listint_len(const listint_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}
	return (a);
}
