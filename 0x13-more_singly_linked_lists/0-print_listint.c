#include "lists.h"
/**
 * print_listint - It should print all the linked list.
 * @h: Type listint_t to print.
 * Return: The numbers of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t f = 0;

	while (h)
	{
		printf("%d\n", h->n);
f++;
h = h->next;
	}
return (f);
}
